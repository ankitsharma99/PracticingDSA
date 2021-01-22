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
int minSum(int a[], int n) {
                
 //code starts here
    int res = a[0];
    int lowestEndingOverall = a[0];

    for(int i = 1; i<n; i++){
        lowestEndingOverall = min(lowestEndingOverall+a[i], a[i]);
        res = min(res, lowestEndingOverall);
    }

    return res;
                
}


int maxSum(int a[], int n) {
                
 //code starts here
    int res = a[0];
    int maxEndingOverall = a[0];

    for(int i = 1; i<n; i++){
        maxEndingOverall = max(maxEndingOverall+a[i], a[i]);
        res = max(res, maxEndingOverall);
    }

    return res;
                
}
                
                
int main() {
                
    FastIO
                
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    cout<<maxSum(a, n) - minSum(a, n)<<endl;


    return 0;
}