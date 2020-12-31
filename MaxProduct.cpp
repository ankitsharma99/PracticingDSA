#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

char GetCoinState(char state, int n){
    if(state == 'H' && n%2 == 0) return 'H';
    else if (state == 'T' && n%2 == 0) return 'T';
    else if(state == 'H' && n%2 != 0) return 'T';
    else if(state == 'T' && n%2 != 0) return 'H';

    return 0;
}

int main(){
    char state;
    cin>>state;
    int n;
    cin>>n;
    cout<<GetCoinState(state, n);
    return 0;
}