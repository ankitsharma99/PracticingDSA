#include<bits/stdc++.h>

#define endl "\n"
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


struct MyStack{
    int capacity;
    int *arr; int top;
    MyStack(int c){
        capacity = c;
        arr = new int[capacity];
        top = -1;
    }

    void push(int x){
        if(top == capacity-1){
            cout<<"Stack Overflow";
            exit(1);
        }
        top++;
        arr[top] = x;
    }

    int pop(){
        if(top == -1){
            return -1;
        }

        int res = arr[top];
        top--;
        return res;
    }

    int peek(){
        if(top == -1 || top == capacity-1) return -1;
        return arr[top];
    }

    bool isEmpty(){
        return (top == -1);
    }

};

int main(int argc, char const *argv[])
{

    FastIO
    MyStack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // cout<<s.pop()<<" "<<endl;

    s.push(55);
    s.push(60);

    cout<<s.peek()<<" ";
    // cout<<<<" "<<endl;

    return 0;
}
