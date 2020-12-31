#include<iostream>
#include<algorithm>
#include<stdlib.h>

using namespace std;

int largestElement(int arr[], int n){
    int largest = arr[0];

    for(int i = 1; i<n; i++){
        largest = max(largest, arr[i]);
    }
    return largest;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<largestElement(arr, n);
}