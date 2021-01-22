#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};
void printList(Node* n){
    while (n!=NULL)
    {
        cout<<n->data<<"-------->";
        n = n->next;
    }
    
}
void insertAtEnd(Node* p){
    
}

int main(){
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* last = NULL;

    head = new Node;
    second = new Node;
    last = new Node;

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = last;

    last -> data = 3;
    last ->next = NULL;

    printList(head);


    return 0;
}