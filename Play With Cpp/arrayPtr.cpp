#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

    cout<<(1+3)[arr]<<endl;  //This prints 5 {position 3+1 = 4 in the array}
    cout<<1[arr+1];  //This prints 3 { position at 1, and then increasing the position by adding 1}
    cout<<"\n";

    cout<<(2*4)[arr+(abs)(2-3)];  //Op : 8

    int res = 1[arr+3];
    cout<<endl<<res;
    return 0;
}
