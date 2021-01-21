#include<bits/stdc++.h>

using namespace std;

void spiralTraversal(int **arr, int r, int c){
    int top = 0; int bottom = r-1; int left = 0; int right = c-1;

    while(top <= bottom && left <= right)
    {
        for(int i = left; i<=right; i++){
            cout<<arr[top][i]<<"\t";
        }
        top++;
        for(int i = top; i<=bottom; i++){
            cout<<arr[i][right]<<"\t";
        }
        right--;

        if(top <= bottom){
            for(int i = right; i>= left ; i--){
                cout<<arr[bottom][i]<<"\t";
            }
            bottom--;
        }

        if(left<=right){
            for(int i = bottom; i>= top; i--){
                cout<<arr[i][left]<<"\t";
            }
            left++;
        }

    }
}

int main(int argc, char const *argv[])
{
    int r=4, c=4;
    // cin>>r>>c;
    // int 

    int **mat;
    mat = new int*[r];

    for(int i = 0; i<r; i++){
        mat[i] = new int[c];
    }
    
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin>>mat[i][j];
        }
    }
    
    cout<<"\n";
    spiralTraversal(mat, r, c);
    // for(int i =0; i<r; i++){
    //     for(int j = 0; j<c; j++){
    //         cout<<mat[i][j]<<"\t";
    //     }
    //     cout<<"\n";
    // }
    return 0;
}