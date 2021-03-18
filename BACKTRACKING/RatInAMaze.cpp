#include<bits/stdc++.h>

using namespace std;

int maze[4][4] = {
                  {1, 0, 0, 0},
                  {1, 1, 0, 0},
                  {0, 1, 1, 0},
                  {0, 1, 1 ,1},
                  };

int sol[4][4];

bool isSafe(int i, int j){
    //IsSafe Function for Backtracking check
    return (i<4 && j<4 && maze[i][j] == 1);
}

bool RatInAMaze(int i, int j){
    if(i == 3 && j == 3){
        sol[i][j] = 1;
        return true;
    }

    if(isSafe(i, j)){
        sol[i][j] = true;

        if(RatInAMaze(i+1, j)) return true;
        else if(RatInAMaze(i, j+1)) return true;
        sol[i][j] = 0;

    }
    return false;
}



int main() {

    if(RatInAMaze){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO!"<<"\n";
    }
    return 0;
}