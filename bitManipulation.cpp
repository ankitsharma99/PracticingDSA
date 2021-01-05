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


int solve(int arr[], int n) {
                
  //code starts here
  int res = 0; 
    for(int i = 0; i<n; i++){
        res = res ^ arr[i];
    }
    return res;
                
}

void oddAppearing(int arr[], int n){
    int XOR = 0, res1 = 0, res2 = 0;

    for(int i = 0; i<n; i++){
        XOR = XOR ^ arr[i];
    }  //Find the XOR of all the elements and has the XOR of both odd appearing elements

    int rsb = XOR & ~(XOR - 1);    //to find the rightmost set bit (rsb)

    for(int i = 0; i<n; i++){
        if((arr[i]& rsb) != 0){     //Both the different numbers will have set bits at different positions
            res1 = res1 ^ arr[i];    
        }else{
            res2 = res2 ^ arr[i];
        }
    }
    cout<<res1 <<  " " <<res2<<endl; //Outputs 5 6 for input {3, 4, 3, 4, 5, 4, 3, 4, 3}

}
                
                
int main() {
                
    FastIO

    //XOR is very useful
    // int a = 4, b = 4;
    // int x = a^b;

    /*
    IMPORTANT FORMULAS : 
    LEFTSHIFT - (x << y => (x * 2 ^ y)) 
    RIGHTSHIFT - (x >> y => (x/2^y))
    */

   //Sample Question to find the number that appears the odd number of times.
   /* 
   Can be easily done with XOR at O(n) time
   Sample Input = {3, 4, 3, 4, 5, 4, 3, 4, 3}
   Sample Output = 5
   */
  //Solution: O(N)
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }   
    // cout<<solve(arr, n); //Outputs 5 for array input {3, 4, 3, 4, 5, 4, 3, 4, 3}

    //Find TWO ODD appearing numbers :

    oddAppearing(arr, n);


    return 0;
}