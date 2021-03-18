#include<bits/stdc++.h>

using namespace std;

int dp[1001][1001];

int LCS(string str1, string str2, int len1, int len2){
    // memset(dp, -1, sizeof(dp));

    // if(dp[len1][len2] != -1){
    //     return dp[len1][len2];
    // }
    

    for(int i = 0; i<=len1; i++){
        dp[i][0] = 0;
    }

    for(int i = 0; i<= len2; i++){
        dp[0][i] = 0;
    }

    for(int i =1; i<= len1; i++){
        for(int j = 1; j<= len2; j++){
            if(str1[i-1] == str2[j-1])
                dp[i][j] =  1 + dp[i-1][j-1];
            
            else
                dp[i][j] =  max(dp[i-1][j], dp[i][j-1]);
        }
    }
    

    return dp[len1][len2];
}

int main() {
    string str1;
    string str2;

    cin>>str1>>str2;

    int s1 = str1.length();
    int s2 = str2.length();

    

    cout<<LCS(str1, str2, s1, s2);




    return 0;
}