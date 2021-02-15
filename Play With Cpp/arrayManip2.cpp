#include<bits/stdc++.h>


using namespace std;


int main(int argc, char const *argv[])
{
    // int arr[5] = {1, 25, 15, 20, 5};

    // int i = ++arr[0];

    // int j = arr[0]++;
    // int m = arr[i++];


    // cout<<"i = "<<i<<"\t"<<"j = "<<j<<"\t"<<"m = "<<m<<"\t";  Ouptuts :  i = 3; j = 2; m = 15


    // return 0;

    int x[4][3] = {{1,2,3}, {4, 5,6 }, {7, 8, 9}, {10, 11, 12}};

    cout<<x+3<<"\t"<<*(x+3)<<"\t"<<*(x+2)+3<<"\t"<<endl;  //Output : Same Address in all cases
   
}
