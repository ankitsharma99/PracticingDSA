#include<bits/stdc++.h>

using namespace std;
int sum5(unsigned int n){
    //1st terminating condition
    if(n == 0) return 0;
    //2nd terminating condition
    if(n ==1) return 1;

    //Our Assumption + Recursive Function
    return n + sum5(n-1);
}
int32_t main(int argc, char const *argv[])
{
    int n = 10;
    cout<<sum5(n);
    return 0;
}
