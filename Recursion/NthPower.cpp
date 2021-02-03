#include<bits/stdc++.h>

using namespace std;

int power(int x, int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return x;
    }
    if(x == 1){
        return 1;
    }
    if(x == 0) {
        return 0;
    }
    return x * power(x, n-1);

}

int main(int argc, char const *argv[])
{
    int x, n;
    cin>>x>>n;

    cout<<power(x, n);
    return 0;
}
