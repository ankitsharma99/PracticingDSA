#include<bits/stdc++.h>

using namespace std;

void sumArray(int arr[], int n, int i){

    //Base Case 1
    if(n<=0) return;
    //Base Case 2
    if(i >= n) return;
    static int sum = 0;
    sum += arr[i];
    arr[i] = sum;
    cout<<arr[i]<<" ";
    //Calling for other indices
    sumArray(arr, n, i+1);
    
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    cin>>i;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
   sumArray(arr, n, i);
    return 0;
}