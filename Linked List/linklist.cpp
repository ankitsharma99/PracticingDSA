#include<iostream>

using namespace std;

struct Node{
    int data;
    Node * next;
}* head;

void create(int arr[], int n){
    Node * t, * last;

    head = new Node;
    head -> data = arr[0];
    head -> next = NULL;

    last = head;

    
    for(int i = 1; i<n; i++){
        t = new Node;
        t -> data = arr[i];
        t -> next = NULL;
        last ->next = t;
        last = t;
    }
}

void Display(Node * p){
    while(p!=NULL){
        cout<<p->data<<"->";
        p = p->next;
    }
    cout<<"NULL";

}
 
int count(Node * p){
    int cnt = 0;
    while(p!=NULL){
        cnt += 1;
        p = p ->next;
    }
    return cnt;
}

int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    create(arr, n);
    Display(head);
    cout<<endl<<endl;

    cout<<count(head)<<endl;


    return 0;

}