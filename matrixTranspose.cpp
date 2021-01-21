#include<bits/stdc++.h>

using namespace std;

void print(int **arr, int m, int n){
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
      
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n\n";
    }
}

//Aux Space reqd here O(n^2)
void printTranspose(int **arr, int m, int n)
{
    int temp[m][n];

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            temp[i][j] = arr[j][i];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j<n; j++){
            arr[i][j] = temp[i][j];
        }
    }
}
//No aux Space reqd
void printTransposeefficient(int **arr, int m, int n){
    for(int i = 0; i<m; i++){
        for(int j = i+1; j<n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int m = 3, n = 3;
    int **mat;

    mat = new int *[m];


    for(int i = 0; i<m; i++){
        mat[i] = new int[n];
    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>mat[i][j];
        }
    }

    cout<<"\n";
    print(mat, m, n);

    cout<<"\n";
    // printTranspose(mat, m, n);
    cout<<"\n";
    // print(mat, m, n);
    cout<<"\n";
    printTransposeefficient(mat, m, n);
    cout<<"\n";
    print(mat, m, n);
    return 0;
}
