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

int countDist(int arr[], int n){
    int res = 0;
    for(int i = 0; i<n; i++){
        bool flag = false;
        for(int j = 0; j<i; j++){
            if(arr[i] == arr[j]){
                flag = true;
                break;
            }
        }
        if(flag == false) res++;
    }
    return res;
}                    
int main() {
    FastIO
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<countDist(arr, n)<<endl;
return 0;
}