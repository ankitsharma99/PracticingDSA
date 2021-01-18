#include<bits/stdc++.h>
using namespace std;
                
                
#define ll long long
#define container(x) x.begin(), x.end()
#define PI 3.1415926535897932384626
#define FastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
                
                
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef unordered_map<int, int> umii;
typedef unordered_set<int> usi;



const int MOD = 1'000'000'007;
const int N = 2e6+13, M = N;


void solve() {
                
  //code starts here
                
}
                
                
int main() {
                
    FastIO
                
    // int t;
    // //cin >> t;
    int n; 
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    //Naive: 
    // for(int i = 0; i<n ; i++){
    //     if(arr[ i] == 0){
    //         for(int j = i+1; j<n; j++){
    //             if(arr[j] != 0){
    //                 swap(arr[i], arr[j]);
    //             }
    //         }
    //     }
    // }
    
    // for(int i = 0; i<n; i++){
    //     cout<<arr[i] << " ";
    // }

    //O(N)
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
    
    for(int i = 0; i<n; i++){
        cout<<arr[i] << " ";
    }




    return 0;
}