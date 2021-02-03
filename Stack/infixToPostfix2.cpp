#include<bits/stdc++.h>

#define endl "\n"
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


bool isOperator(char c)
{
	if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^') return true;
	else return false;
}

int precedence(char c) 
{ 
    if(c == '^') return 3; 
    else if(c == '*' || c == '/') return 2; 
    else if(c == '+' || c == '-')  return 1; 
    else return -1; 
} 

string InfixToPostfix(stack<char> s, string infix)
{
	string postfix;
	for(int i=0;i<infix.length();i++)
	{
		if((infix[i] >= 'a' && infix[i] <= 'z')
		||(infix[i] >= 'A' && infix[i] <= 'Z'))
		{
			postfix+=infix[i];   //Concatenate infix[i] in postfix if the infix char is an Operand
		}

		else if(infix[i] == '(')
		{
			s.push(infix[i]);
		}
		else if(infix[i] == ')')
		{
			//pop an add to postfix the popped values until we find an opening bracket or until the stack gets empty
			while((s.top()!='(') && (!s.empty()))
			{
				char temp=s.top();
				postfix+=temp;
				s.pop();
			}

			//If Stack top is Opening Bracket, pop
			if(s.top()=='(')
			{
				s.pop();
			}
		}

		//If infix character is an Operator, fall into this  if block
		else if(isOperator(infix[i]))
		{
			//If stack is empty, put the char in the stack
			if(s.empty())
			{
				s.push(infix[i]);
			}


			else
			{
				//Precedence of character in the infix string is greater than that of the stack top element, push the character on the stack
				if(precedence(infix[i])>precedence(s.top()))
				{
					s.push(infix[i]);
				}	

				//If precedence equals, then also push or if infix char is exponent character
				else if((precedence(infix[i])==precedence(s.top()))&&(infix[i]=='^'))
				{
					s.push(infix[i]);
				}


				//Pop until the stack gets empty or the precedence of the infix char is smaller than or equal to the precedence of top stack element
				else
				{
					while((!s.empty())&&( precedence(infix[i])<=precedence(s.top())))
					{
						postfix+=s.top();
						s.pop();
					}
					s.push(infix[i]);
				}
			}
		}
	}

	//Pop an append the remaining stack characters
	while(!s.empty())
	{
		postfix+=s.top();
		s.pop();
	}
	
	return postfix;
}

int main() 
{  
    FastIO
    // cout<<"Enter a Infix Expression :"<<endl;
  	string infix_exp, postfix_exp;
  	
  	cin>>infix_exp;
  	stack <char> stack;
	cout<<"INFIX EXPRESSION: "<<infix_exp<<endl;
  	postfix_exp = InfixToPostfix(stack, infix_exp);
  	cout<<endl<<"POSTFIX EXPRESSION: "<<postfix_exp;
	  
	return 0;
}