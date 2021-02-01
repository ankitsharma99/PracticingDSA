#include<bits/stdc++.h>

#define endl "\n"
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


vector<int> PrevGreaterOnLeft(int arr[], int n){
    vector<int> v;
    stack<int> st;
    v.push_back(-1);
    st.push(arr[0]);

    for(int i = 1; i<n; i++){
        if(st.size() && arr[i] > st.top())
            v.push_back(-1);
        
        else if(!st.size())
            v.push_back(-1);

        else if(st.size() && arr[i] < st.top())
        {
            while(st.top() && arr[i] < st.top()) {
                st.pop();
            }

            if(!st.size()) v.push_back(-1);

            else{
                v.push_back(st.top());
            }
        }
        st.push(arr[i]);

    }
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


    vector<int> val = PrevGreaterOnLeft(arr, n);

    for(int i = 0; i<val.size(); i++){
        cout<<val[i]<<" ";
    }


    return 0;
}