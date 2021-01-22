#include<bits/stdc++.h>
using namespace std;
                
                
#define ll long long
#define container(x) x.begin(), x.end()
#define PI 3.1415926535897932384626
#define FastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
                
                
typedef pair<int, int> pii;
typedef vector<int> vi;
                
                
const int MOD = 1'000'000'007;
const int N = 2e6+13, M = N;
                
                
//Program to print elemnets alongwith their appearances count
void solve(int arr[], int n) {
                
//   code starts here
    unordered_map<int, int> um;

    for(int i = 0; i<n; i++){
        um[arr[i]]++;
    }

    for(auto x : um){
        cout<<x.first<< " " <<x.second<<"\n";
    }
                
}
                
                
int main() {
                
    FastIO
                
    // int t;
    // cin >> t;
                
    int n, m, k;
    cin>>n;
    int a[n];
                
    //while(t--) {
     //solve();
    //}
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    solve(a, n);

    return 0;
}