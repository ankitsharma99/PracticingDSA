#include<bits/stdc++.h>

#define endl "\n"
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


vector<int> PrevGreaterOnLeft(int arr[], int n){
    vector<int> v;

    //A stack of pairs
    stack<pair<int, int>> st;

    //Push 1st element in the vector as -1
    v.push_back(-1);
    //push 1st element and its index
    st.push({arr[0], 0});

    for(int i = 1; i<n; i++){

        //Compare first element of pair in stack and push index of that element in vector if smaller
        if(st.size() && arr[i] < st.top().first)
            v.push_back(st.top().second);

        else if(!st.size())
            v.push_back(-1);

        else if(st.size() && arr[i] > st.top().first) {
            while(st.size() && arr[i] > st.top().first)
                st.pop();

            if(!st.size()) v.push_back(-1);
            else v.push_back(st.top().second);
        }
        st.push({arr[i], i});
    }

    //Process the vector by subtracting the index and the element in the vector{elements in the vector are the nearest greater elements on left}
    for(int i = 0; i<v.size(); i++){
        v[i] = i - v[i];
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
