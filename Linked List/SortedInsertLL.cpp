#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){

        data = x;
        next = NULL;
    }
};

Node *sortedInsert(Node *head, int key){
    if(head == NULL){
        Node *temp = new Node(key);
        return temp;
    }
    if(key < head->data){
        Node *temp = new Node(key);
        temp -> next = head;
    
        return temp;

    }
    Node *curr = head;
    while(curr->next!=NULL && key>curr->next->data)
        curr = curr->next; 
    Node *temp = new Node(key);
    temp -> next = curr -> next;
    curr ->next = temp;
    return head;
}

int main(int argc, char const *argv[])
{
    /* code */
    
    // int arr[] = {5, 4, 8, 3, 9};
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    Node *head = new Node(arr[0]);

    Node *last = head;
    Node *t;

    for(int i = 1; i<n; i++){
        t = new Node(arr[i]);
        last ->next = t;
        last = t;
    }
    sortedInsert(head, 9);

    
    // Node *head = new Node(1);
    // Node *temp = new Node(2);
    // Node *temp2 = new Node(3);
    // Node *temp3 = new Node(4);
    // Node *temp4 = new Node(5);
    // Node *temp5 = new Node(6);
    // head ->next = temp;
    // temp -> next = temp2;
    // temp2 -> next = temp3;
    // temp3 -> next = temp4;
    // temp4 -> next = temp5;

    Node *curr = head;

    while(curr != NULL){
        cout<<curr->data<<"\t" <<"==>";
        curr = curr->next;
    }
    cout<<"NULL";
    return 0;
}
