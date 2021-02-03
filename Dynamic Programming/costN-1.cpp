/*
QUESTION : There are n stations in a route, starting from 0 to N-1.
A train moves from first station (0) to last station (N-1) in only forward direction.
The cost of ticket between any two stations is give already. Find the minimum cost of
travel from station 0 to station N-1
*/

#include<bits/stdc++.h>

using namespace std;



int cost[4][4] = {{0, 10, 75, 125},
                  {-1, 0, 35, 50},
                  {-1, -1, 0, 80},
                  {-1, -1, -1, 0}};

//Memo 2D array
int memo[4][4] = {0};
//DP(Memoized Approach)
int CalcMinCostDP(int s, int d){
    
    

    if(s == d || (s == d-1)){
        return cost[s][d];
    }

    if(memo[s][d] == 0){
        int minCost = cost[s][d];
        int temp = 0;
        for(int i = s+1; i<d; i++){
            temp = CalcMinCostDP(s, i) + CalcMinCostDP(i, d);
        }
        if(temp<minCost){
            minCost = temp;
        }
        memo[s][d] = minCost;
    }
    
    return memo[s][d];
}

//Normal Recursive Implementation
int CalcMinCost(int s, int d){
    if(s == d || (s == d-1)){
        return cost[s][d];
    }

    int minCost = cost[s][d];
    int temp = 0;
    for(int i = s+1; i<d; i++){
         temp = CalcMinCost(s, i) + CalcMinCost(i, d);
    }
    if(temp<minCost){
        minCost = temp;
    }
    return minCost;
}



//Bottom Up Approach O(n^2)
int CalcMinCostBUA(){
    int minCost[4];
    minCost[0] = 0;
    minCost[1] = cost[0][1];

    for(int i = 2; i<4; i++){
        minCost[i] = cost[0][i];
        for(int j = 1; j<i; j++){
            if(minCost[i] > minCost[j] + cost[i][j]){
                minCost[i] = minCost[j] + cost[i][j];
            }
        }
    }
    return minCost[3];
}

int main(){
    // int s = 0;
    // int d = 3;

    cout<<CalcMinCostBUA()<<'\n';
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cout<<memo[i][j]<<" ";
        }
        cout<<endl;
    }
}