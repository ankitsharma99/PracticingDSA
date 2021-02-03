#include<bits/stdc++.h>

using namespace std;

void swapped(int *a, int *b){
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;

    cout<<*a<<" "<<*b<<endl;
}

void swapped2(int *a, int *b){
    *a = *a - *b;
    *b =  *a + *b;
    *a = (abs)(*a - *b);

    cout<<*a<<" "<<*b<<endl;
}

void swapped3(int &a, int &b){
    a = a - b;
    b =  a + b;
    a = (abs)(a - b);

    cout<<a<<" "<<b<<endl;
}


int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    swapped2(&a, &b);
    return 0;
}
