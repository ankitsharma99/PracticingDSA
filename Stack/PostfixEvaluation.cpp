#include<bits/stdc++.h>

using namespace std;

int isOperand(char c)
{
	if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^') return 0;
	else return 1;
}


int main(int argc, char const *argv[])
{
    string postfix = "92*3+";
    stack<int> st;

    int character1, character2, res = 0;

    for(int i = 0; i<postfix.length(); i++){
        if(isOperand(postfix[i]))
            st.push(postfix[i] - '0');

        else{
            character1 = st.top();
            st.pop();
            character2 = st.top();
            st.pop();

            switch(postfix[i]){
                case '+' : res = character2 + character1; break;
                case '-' : res = character1 - character2; break;
                case '*' : res = character1 * character2; break;
                case '/' : res = character1 / character2; break;
                case '^' : res = character2 ^ character1; break;
            }
            st.push(res);
        }
    }

    cout<<st.top();
    return 0;
}
