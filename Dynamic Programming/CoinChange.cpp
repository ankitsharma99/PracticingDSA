#include<bits/stdc++.h>

using namespace std;

//Recursion
int coinChange(int arr[], int n, int sum) {

    if(n == 0) return 0;            //if number of coins is zero, we do not have any possibility
    if(sum == 0) return 1;          //if sum == 0, then we will have ATLEAST 1 possibility

    int res = coinChange(arr, n-1, sum);            //Do not include the last element

    if(arr[n-1] <= sum) {           
        res += coinChange(arr, n, sum-arr[n-1]);        //include the last element and recur for the smaller sum, i.e. sum-arr[n-1];
    }
    return res;
}


//DP
int dp[1001][1001];
int coinChangeDP(int arr[], int n, int sum) {

    for(int i =0; i <=n; i++) {
        dp[0][i] = 1;
    }
    for(int i =1; i <=sum; i++) {
        dp[i][0] = 0;
    }
    for(int i= 1; i<=sum; i++) {
        for(int j = 1; j<= n; j++) {
            dp[i][j] = dp[i][j-1];


            
            if(arr[j-1] <= i) {
                dp[i][j] += dp[i-arr[j-1]][j];
            }
        }
    }
    return dp[sum][n];
}


int main() {

    int arr[3] = {1, 2, 3};

    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 4;

    cout<<coinChangeDP(arr, size, sum);

    return 0;
}