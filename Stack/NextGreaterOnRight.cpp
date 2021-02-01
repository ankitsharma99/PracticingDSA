#include<bits/stdc++.h>

#define endl "\n"
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


vector<int> NextGreaterOnRight(int arr[], int n){
    vector<int> v;
    stack<int> st;

    v.push_back(-1);
    st.push(arr[n-1]);

    for(int i = n-2; i>=0; i--){

        //Check if the Stack is Empty. If it is, insert -1 int vector array
        if(!st.size()) v.push_back(-1);

        //Check if the element is smaller than the top element of STACK
        //If smaller push back to the vector
        else if(st.size() && arr[i] < st.top()){
            v.push_back(st.top());
        }

        

        //Multiple cases when array element is greater than the top element of the stack.
        else if(st.size() && arr[i] >= st.top()){

            //POP elements until we find element smaller than st.top
            while(st.size() && arr[i] >= st.top()){
                st.pop();
            }

            //if stack becomes empty push -1 in the vector
            if(!st.size()) v.push_back(-1);

            //push to vector  if we find a smaller element than st.top()
            else {
                v.push_back(st.top());
            }
        }
        //Push items on the stack one by one
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


            /*
            SAMPLE INPUT AND OUPUT
            8
            5 15 10 8 6 12 9 18 - INPUT array
            15 18 12 12 12 18 18 -1 - OUTPUT array
            */
    vector<int> val = NextGreaterOnRight(arr, n);

    for(int i = 0; i<val.size(); i++){
        cout<<val[i]<<" ";
    }


    return 0;
}
