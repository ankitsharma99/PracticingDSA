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
                
                
                
int solve(int a[], int b[], int n, int m) {
                
//   code starts here
    int answer = 0;
    
    set<int> s;
    for(int i = 0; i<n; i++){
        s.insert(a[i]);
    }
    for(int j = 0; j < n; j++){
        if(s.find(b[j]) != s.end()){
            answer++;
            s.erase(b[j]);
        }
    }
    return answer;

                
}
                
                
int main() {
                
    FastIO
                
    // int t;
    // cin >> t;
                
    int n, m, k;
    
    cin>>n>>m;
    int a[n];
    int b[m];
    // cout<<"Enter values of array 'a' ";
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }     
    // cout<<"Enter values of array 'b' ";
    for(int i = 0; i<m; i++){
        cin>>b[i];
    }     
    //while(t--) {
     //solve();
    //}
    //count of distinct common elements required
    cout<<solve(a, b, n, m)<<endl;

    return 0;
}