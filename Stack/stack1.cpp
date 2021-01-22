#include<iostream>

using namespace std;

struct Stack{
    int size;
    int top;
    int *arr_ptr;
};
void Create(Stack * s1){
    cout<<"Enter the size of the Stack: ";
    cin>>s1->size;

    s1->top = -1;
    s1->arr_ptr = new int[s1->size];
}

void Display(Stack s1){
    for(int i = s1.top; i>=0; i--){
        cout<<s1.arr_ptr[i]<<" ";
    }
    cout<<endl;
}

void push(Stack *s1, int x){
    
    
    if(s1->top == (s1->size-1)){
        cout<<"Stack Overflow!";
    }
    else{
        s1->top += 1;
        s1->arr_ptr[s1->top] = x;
    }

}

int pop(Stack *s1){
    int x = -1;

    if(s1->top == -1)   cout<<"Stack Underflow";
    else{
        x = s1->arr_ptr[s1->top];
        s1->top--;
        return x;
    }    
    return x;
}

int peek(Stack s1, int pos){
    int x = -1;
    if (s1.top-pos + 1<0)
    {
        cout<<"Invalid";
    }
    else{
        x = s1.arr_ptr[s1.top - pos + 1];
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



int main(){
    
    
    return 0;
}