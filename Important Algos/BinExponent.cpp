#include<bits/stdc++.h>

using namespace std;


//recursive implementation
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2 == 1)   //if b is odd
        return res * res * a;
    else  //if b is even
        return res * res;
}


//Iterative Implementation
long long binpow2(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}


 
int main(int argc, char const *argv[])
{
	
	cout<<binpow(2, 3);
		
	return 0;
}