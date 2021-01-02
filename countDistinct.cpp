#include<bits/stdc++.h>
using namespace std;
                
#define FastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);               
#define ll long long
#define container(x) x.begin(), x.end()
#define PI 3.1415926535897932384626
#define endl "\n"
                
typedef pair<int, int> pii;
typedef vector<int> vi;
                
                
const int MOD = 1'000'000'007;
const int N = 2e6+13, M = N;


//eg arr[7] = {10, 20, 10, 10, 10, 20, 30}  

int countDist1(int arr[], int n){
    int count = 0;  //initialize count as 0
    for(int i = 0; i<n; i++){
        bool flag = false;   
        for(int j = 0; j<i; j++){
            if(arr[i] == arr[j]){
                flag = true;
                break;
            }
        }
        if(flag == false) count++;
    }
    return count;
}     

//using set O(log n) {can also be performed by unordered_set}
int countDist2(int arr[], int n){
    set<int> s;
    for(int i = 0; i<n; i++){
        s.insert(arr[i]);
    }

    return s.size();
}

int main() {
    FastIO
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<countDist2(arr, n)<<endl;
return 0;
}