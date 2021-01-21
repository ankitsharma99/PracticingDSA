#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int r, c;
    cin>>r>>c;
    int mat[r][c];

    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin>>mat[i][j];
        }
    }
    cout<<"\n";

    if(r == 1){
        for(int i = 0; i<c; i++){
            cout<<mat[0][i]<<"\t";
        }
    }else if(c == 1){
        for(int i = 0; i<r; i++){
            cout<<mat[i][0]<<"\t";
        }
    }else{
        for(int i = 0; i<c; i++){
            cout<<mat[0][i]<<"\t";
        }
        for(int i = 1; i<r; i++){
            cout<<mat[i][c-1]<<"\t";
        }
        for(int i = c-2; i>= 0; i--){
            cout<<mat[r-1][i]<<"\t";
        }
        for(int i = r-2; i>=1; i--){
            cout<<mat[i][0]<<"\t";
        }

    }
    cout<<"\n";
    cout<<"\n";
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
