#include<bits/stdc++.h>

using namespace std;


//Recursive Approach _ Easy Af

int min(int x, int y, int z) 
{
    return min(min(x, y), z); 
     
}
int EditDistance(string s1, string s2, int m, int n) {
    if(m == 0) return n;
    if(n == 0) return m;

    if(s1[m-1] == s2[n-1]){
        return EditDistance(s1, s2, m-1, n-1);
    }else{
        return 1 + min(EditDistance(s1, s2, m-1, n), EditDistance(s1, s2, m, n-1), EditDistance(s1, s2, m-1, n-1));
    }
}

//Bottom _ up

int EditDistBU(string s1, string s2, int m, int n) {
    int dp[m+1][n+1];

    // memset(dp, -1, sizeof(dp));


    for(int i = 0; i<=m; i++) {
        dp[i][0] = i;
    }

    for(int i = 0; i<=n; i++) {
        dp[0][i] = i;
    }
    

    for(int i = 1; i<= m; i++) {
        for(int j = 1; j<=n; j++) {
            if(s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            }else{
                dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]);
            }
        }
        
    }

return dp[m][n];


}




int main () {

    string s1, s2;
    cin>>s1 >> s2;
    int m = s1.length();
    int n = s2.length();

    cout<<EditDistBU(s1, s2, m, n);

    return 0;

}