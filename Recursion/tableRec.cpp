#include<bits/stdc++.h>

using namespace std;

void printTable(int n, int i){
    if(n == 0 || i == 0) return;
    if(i == 11) return;
    cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    printTable(n, i+1);

}

int main() {
    int n, i;
    cin>>n>>i;

    printTable(n, i);
}