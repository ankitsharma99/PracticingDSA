#include<iostream>

using namespace std;

int main(){
    int arr[10];

    int temp = sizeof(arr)/sizeof(arr[0]);
    cout<<temp;

    return 0;
}