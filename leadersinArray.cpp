#include<iostream>
#include<algorithm>
#include<stdlib.h>

using namespace std;

void leadersInArray(int arr[], int n){
    int curr_leader = arr[n-1];
    cout<<curr_leader<<" ";

    for(int i = n-2; i>=0; i--){
        if(curr_leader<arr[i]){
            curr_leader = arr[i];
            cout<<curr_leader<<" ";
        }
    }
}



int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    leadersInArray(arr, n);
    return 0;
}
