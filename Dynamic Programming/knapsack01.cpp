#include<bits/stdc++.h>

using namespace std;

// Recursive Function:
int wt[4] = {1, 3, 4, 5};
int val[4] = {1, 4, 5, 7};
int W = 7;
int dp[5][8];

int knapsack(int wt[], int val[], int W, int n){
    if(n == 0 || W == 0){
        return 0;
    }
    
    if(wt[n-1] <= W){
        return max((val[n-1] + knapsack(wt, val, W-wt[n-1], n-1)), knapsack(wt, val, W, n-1)); //Choice of considering an element
    }else{
        return knapsack(wt, val, W, n-1);
    }
}

//Memoized Approach:
int knapsackMemoized( int W, int n){

    //Base Condition
    if(n == 0 || W == 0){
        return 0;
    }

    //Memo Check
    if(dp[n][W] != -1) {
        return dp[n][W];
    }
    
    //Recursive Calls
    if(wt[n-1] <= W){
        dp[n][W] =  max((val[n-1] + knapsackMemoized( W-wt[n-1], n-1)), knapsackMemoized( W, n-1)); //Choice of considering an element
        return dp[n][W];
    }else{
        dp[n][W] = knapsackMemoized(W, n-1);
        return dp[n][W];
    }
}

//Bottom UP:
int knapsackBU(int W, int n){

    // for(int i = 0; i<n+1; i++){
    //     for(int j = 0; j<W+1; j++){
    //         if(i == 0 || j == 0){
    //             dp[i][j] = 0;
    //         }
    //     }
    // }
    for(int i = 1; i<n+1; i++){
        for(int j = 1; j<W+1; j++){
            if(wt[i-1] <= j){
                dp[i][j] = max((val[i-1] + dp[j-wt[i-1]]), dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][W];

}

int main()
{
    
    // memset(dp, -1, sizeof(dp));
    // cout<<knapsackMemoized( W, 4);
    // cout<<"\n";
    cout<<knapsackBU(W, 4);
    // for(int i = 0; i<5; i++ ){
    //     for(int j = 0; j<8; j++){
    //         cout<<dp[i][j]<<"   ";
    //     }
    //     cout<<"\n";
    // }
    
    
    return 0;
}
