#include<bits/stdc++.h>

using namespace std;

struct Node 
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
}*head;


//Using count Method
void MiddleElement(Node *head){
    int count = 0;
    if(head == NULL)
        return;
    
    Node *curr;
    for( curr = head; curr!=NULL; curr = curr->next)
        count++;
    

    curr = head;
    for(int i = 0; i<count/2; i++)
        curr = curr->next;
    
    cout<<curr->data;
    
}


//Double pointer method (fast and slow ptrs)
void MiddleElementLL(Node *head){
    if(head == NULL) return;

    Node *fast = head, *slow = head;
    while( fast ->next != NULL && fast != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    cout<<slow->data;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0 ;i<n ; i++){
        cin>>arr[i];
    }
    head = new Node(arr[0]);
    Node *last = head;
    Node *t;

    for(int i = 1; i<n; i++){
        t = new Node(arr[i]);
        last ->next = t;
        last = t;
    }

    // MiddleElement(head);
    MiddleElementLL(head);
    
    return 0;
}
