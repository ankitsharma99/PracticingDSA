#include<bits/stdc++.h>

using namespace std;

// const int row = 3;
// const int column = 2;
// void print(int mat[][column])
// {
//     for(int i = 0; i<3; i++){
//         for(int j = 0; j<2; j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
// }

void print(int **arr, int m, int n){
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            arr[i][j] = 10+i;
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n\n";
    }
}

int main()
{
    // Standard way:
    // const int r=3, c=2;
    
    // int mat[3][2] = {{10, 20 }, {30, 40} , {50 , 60}};
    // cout<<**mat<<"\n";

    // print(mat);

    //Double Pointer Method
    //Disadvantage : Not Cache Friendly

    int m = 3, n = 3;
    int **mat;

    mat = new int *[m];


    for(int i = 0; i<m; i++){
        mat[i] = new int[n];
    }

    //Row Major
    // for(int i =0; ; i++){
    //     for(int j = 0; j<3; j++){
    //         mat[i][j] = 10;
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    print(mat, m, n);

    


    //Array of Pointer method:
    // int m = 3, n =4;
    // int *arr[m];

    // for(int i = 0; i<m; i++)
    // {
    //     arr[i] = new int[n];
    // }

    // for(int i =0; i<m; i++){
    //     for(int j = 0; j<n ; j++){
    //         arr[i][j] = 69;
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }


}