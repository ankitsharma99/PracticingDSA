#include<iostream>
#include<algorithm>
#include<stdlib.h>

using namespace std;

void sortedOrNot(int arr[], int n){
    for(int i = 0; i<n; i++){
        if(arr[i]<arr[i+1]){
            cout<<true;
        }
    }
    cout<<false;
}


int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    sortedOrNot(arr, n);

    return 0;
}