#include<bits/stdc++.h>

#define endl "\n"
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int isMatching(char a, char b){
    if(a == '('  && b == ')') return 1;
    else if(a == '{' && b == '}') return 1;
    else if(a == '[' && b == ']') return 1;

    return 0;
 }

int isBalanced(string str){
    stack<char> st;

    for(int i = 0; i<str.length(); i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            st.push(str[i]);
        
        else if(isMatching(st.top(), str[i])){
            st.pop();
        }
        if(st.size()  == 0) return 1;
        
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    FastIO
    string str = "[{(})]";

    cout<<( (isBalanced(str)) ? "TRUE" : "FALSE");

    return 0;
}
