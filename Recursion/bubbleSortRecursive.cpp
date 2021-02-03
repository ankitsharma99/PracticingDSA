#include<bits/stdc++.h>

using namespace std;

void RbubbleSort(int arr[], int n){
    //Perform One pass
    if(n == 1) return;
    for(int j = 0; j<n-1; j++)
        if(arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
    
    RbubbleSort(arr, n-1);

    
}

int main() {
    int n;
    cin>>n;
    int arr[n];

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    RbubbleSort(arr, n);

    for(int i = 0; i<n; i++){
        cout<<arr[i] <<" ";
    }
    
}