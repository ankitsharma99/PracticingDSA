#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int area[n];
    for(int i = 0; i<n; i++)
        cin>>area[i];
    

    int res = 0; 
    for(int  i = 0 ; i<n; i++){
        int curr = area[i];
        for(int j = i-1; j>= 0; j-- ){
            if(area[j] >= area[i]) curr += area[i];
            else break;
        }

        for(int j = i+1; j<n; j++){
            if(area[j] >= area[i] ) curr += area[i];
            else break;
         }

         res = max(res, curr);
    }
    cout<<res;
    return 0;
}
