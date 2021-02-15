#include<bits/stdc++.h>

using namespace std;


void fun(int **p){
    cout<<**p;
}

int main(int argc, char const *argv[])
{
    int arr[4][3] = {1, 2,3, 4, 4, 3, 2, 8, 7, 8, 9, 0};


    int *ptr;
    ptr = &arr[0][0];

    fun(&ptr);

    return 0;
}
