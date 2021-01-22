#include<iostream>

using namespace std;

struct Node{
    int data;
    Node * next;
}*head;

void Create(int arr[], int n){
    Node * last;
    head = new Node;
    head ->data = arr[0];
    head ->next = NULL;
    last = head;

    for(int i = 1; i<n; i++){
        Node* p = new Node;
        p ->data = arr[i];
        p ->next = NULL;
        last -> next = p;
        last = p;
    }
}
void Display(Node * p){
    while(p != NULL){
        cout<<p -> data<<"->";
        p = p -> next;
    }
}
int DeleteBegin(Node *p){
    p = new Node;
    p = head;
    head = head ->next;
    int x = p->data;
    delete p;
    return x;
}
int DeletPos(Node *p, int pos){
    
    
        p = new Node;
        p = head;
        Node *q = new Node;
        q = NULL;
        for(int i = 1; i<pos && p; i++){
            q = p;
            p = p ->next;
        }
        q ->next = p ->next;
        int x = p ->data;
        delete p;
        

    
    return x;
}
void Reverse(Node * p){
    Node * q, *r;
    q = NULL;
    r = NULL;
    p = head;
    while(p!=NULL){
        r = q;
        q = p;
        p = p ->next;
        q ->next = r;
    }
    head = q;

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    // int pos;
    // cin>>pos;
    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }
    Create(arr, n);
    // Display(head);
    // //cout<<"Deleted Element is : "<<DeleteBegin(head)<<endl;
    // cout<<"Deleted element at pos"<<" "<<pos<<" "<<"is"<<" "<<DeletPos(head, pos)<<endl;
    Reverse(head);
    Display(head);

    return 0;
}