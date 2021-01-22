#include<iostream>
#include<cstring>

using namespace std;

struct Stack{
    int size;
    int top;
    char *arr_ptr;
}*s1;
void Create(Stack * s1){
    cout<<"Enter the size of the Stack: ";
    cin>>s1->size;

    s1->top = -1;
    s1->arr_ptr = new char[s1->size];
}

void push(char x){
    
    if(s1->top == (s1->size-1)){
        cout<<"Stack Overflow!";
    }
    else{
        s1->top += 1;
        s1->arr_ptr[s1->top] = x;
    }

}

char pop(){
    char x = -1;
    if(s1->top == -1)   cout<<"Stack Underflow";
    else{
        x = s1->arr_ptr[s1->top];
        s1->top--;
        
    }    
    return x;
}

int isEmpty(Stack s1){
    if(s1.top == -1) return true;
    else return false;
}

int StackTop(Stack s1){
    if(s1.top == -1) return -1;
    else return s1.arr_ptr[s1.top];
}

int isFull(Stack s1){
    if(s1.top == s1.size - 1) return true;
    else return false;

}

int isOperand(char x){
    if(x == '+' || x == '-' || x == '*' || x == '/') return 0;
    else return 1;
}

int precedence(char x){
    if(x == '+' || x == '-') return 1;
    else if (x == '*' || x == '/') return 2;

    return 0;
}

void inToPost(){
    char *infix = "a+b*c";
    Stack s1;
    int i= 0, j = 0;
    char *postfix;
    int length = strlen(infix);
    postfix = new char[length + 1];
    while (infix[i]!='\0')
    {
        if(isOperand(infix[i])) postfix[j++] = infix[i++];

        else{
            if (precedence(infix[i])>precedence(StackTop(s1)))
            {
                push(infix[i]);
            }
            else{
                postfix[j++] = pop();
            }
            
        }
    }
    while (!isEmpty(s1))
    {
        postfix[j++] = pop();
    }
    postfix[j] = '/0';
    
    cout<<"Postfix = "<<postfix;
}

int main(){
    // char * infix = ;
 
    
    // push('%');
    inToPost();
    

    return 0;
}