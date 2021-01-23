#include<bits/stdc++.h>

using namespace std;


struct Node {
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void NthNodeFromEnd(Node *head, int n){
    if(head == NULL) return;
    int count = 0; 

    //curr ptr for help
    Node *curr;

    //Traversing from start to end to find count
    for(curr = head; curr!= NULL; curr = curr->next){
        count++;
    }

    if(count<n) return;


    curr = head;
    //Keep i from 1 to count-n+1
    for(int i = 1; i<count-n+1; i++){
        curr = curr->next;
    }

    cout<<curr->data;
}

void NthNodeFromEndEff(Node *head, int n){
    if(head == NULL) return;

    Node *first = head;
    for(int i = 0; i<n; i++){
        if(first == NULL) return;

        //First move first to nth position
        first = first->next;
    }
    Node *second = head;
    while(first != NULL){

        //move second when first is at nth position
        second = second->next;
        first = first->next;
    }

    cout<<second->data;
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
   

    NthNodeFromEndEff(head, 3);
    return 0;

}