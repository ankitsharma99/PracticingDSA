#include<bits/stdc++.h>

using namespace std;

void TOH(int n, char S, char D, char E){
    if(n<=0) return;

    TOH(n-1, S, E, D);
    cout<<"Move Disc "<<n<<" From "<<S<<" To "<<D<<endl;
    //Destination : D
    //Source : S
    //Auxiliary : E
    TOH(n-1, E, D, S);
}

int main(){
    int n;
    cin>>n;
    char S, D, E;
    cin>>S>>D>>E;

    TOH(n, S, D, E);
}