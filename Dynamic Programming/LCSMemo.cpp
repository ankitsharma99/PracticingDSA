#include<bits/stdc++.h>

using namespace std;

int memo[1001][1001];

int LCS(string str1, string str2, int len1, int len2){
    memset(memo, -1, sizeof(memo));

    if(memo[len1][len2] != -1){
        return memo[len1][len2];
    }
    if(len1 == 0 || len2 == 0){
        return 0;
    }


    if(str1[len1-1] == str2[len2-1])
        memo[len1][len2] =  1 + LCS(str1, str2, len1-1, len2-1);
    
    else
        memo[len1][len2] =  max(LCS(str1, str2, len1-1, len2), LCS(str1, str2, len1, len2-1));

    return memo[len1][len2];
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