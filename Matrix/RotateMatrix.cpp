#include<bits/stdc++.h>

using namespace std;

void Rotate90(int **arr, int r, int c)
{
    int temp[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            temp[r-j-1][i] = arr[i][j];
        }
    }
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            arr[i][j] = temp[i][j];
        }
    }


}
void printTransposeefficient(int **arr, int m, int n){
    for(int i = 0; i<m; i++){
        for(int j = i+1; j<n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}
void Rotate90Efficient(int **arr, int r, int c)
{
    // for(int i = 0; i<r; i++){
    //     for(int j = i+1; j>c; j++){
    //         swap(arr[i][j], arr[j][i]);
    //     }
    // }
    printTransposeefficient(arr, r, c);
    for(int i = 0; i<c; i++){
        int low = 0, high = r-1;
        while(low<high){
            swap(arr[low][i], arr[high][i]);
            low++;
            high--;
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
    Rotate90Efficient(mat, r, c);
    for(int i =0; i<r; i++){
        for(int j = 0; j<c; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
