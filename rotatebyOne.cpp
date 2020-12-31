#include<iostream>
#include<algorithm>
#include<stdlib.h>

using namespace std;

//****************left rotation******************:
void rotateArrayByOne(int arr[], int n){
    int temp = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
        
    }
    arr[n - 1] = temp;
    // for(int i = 0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

}

/*
void rightRotate(int arr[], int n){
    int temp = arr[n-1];
    for(int i = n-3; i>= 0; i--){
        arr[i] = arr[i+1];
    }
    arr[0] = temp;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
*/

void rotateByD(int arr[], int n, int d){
    for(int i = 0; i<d; i++){
        rotateArrayByOne(arr, n);
    }
    
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int d;
    cin>>d;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    //rotateArrayByOne(arr, n);
    //rightRotate(arr, n);
    rotateByD(arr, n, d);
    return 0;
}