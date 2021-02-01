#include<bits/stdc++.h>

#define endl "\n"
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

vector<int> NextSmallerOnRight(int arr[], int n){
    vector<int> v;
    stack<int> st;
    v.push_back(-1);
    st.push(arr[n-1]);

    for(int i = n-2; i>=0; i--){
        if(st.size() && arr[i] > st.top())
            v.push_back(st.top());
        
        else if(!st.size())
            v.push_back(-1);

        else if(st.size() && arr[i] <= st.top()){
            while (st.size() && arr[i] <= st.top())
                st.pop();
            
            if(!st.size()) v.push_back(-1);

            else
                v.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(v.begin(), v.end());

    return v;

}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

            
    vector<int> val = NextSmallerOnRight(arr, n);

    for(int i = 0; i<val.size(); i++){
        cout<<val[i]<<" ";
    }


    return 0;
}