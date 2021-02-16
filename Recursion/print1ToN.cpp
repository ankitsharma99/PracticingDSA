#include<bits/stdc++.h>


using namespace std;


void print1ToN(int n){
    if(n == 0) return;

    print1ToN(n-1);
    cout<<n<<" ";
}
int main(int argc, char const *argv[])
{
    print1ToN(5);
    return 0;
}
