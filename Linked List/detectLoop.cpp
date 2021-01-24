#include<bits/stdc++.h>

using namespace std; 

struct Node{
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        next = nullptr;
        
    }
}*head  = nullptr;

struct node{
    int data;
    node *next;
    bool isVisited;
    node(int data){
        this->data = data;
        next  =nullptr;
        isVisited = false;
    }
}*head1 = nullptr;

//using isVisited //Easy af
int hasLoopM1(node *head){
    node *curr = head;

    while(curr != nullptr){
        if(curr->isVisited == true) return 1;
        curr->isVisited = true;
        curr = curr->next;
    }
    return 0;
}

//Using an external ptr. This method destroys the Linked List but finally finds if it has a loop or not
int hasLoopM2(Node *head){
    
    Node *temp = new Node(500);  //External ptr
    Node *curr = head; //current ptr

    while(curr != nullptr){
        if(curr->next == nullptr) return 0;  //return 0 (False) if next of current ptr is null
        if(curr->next == temp) return 1; //return 1 (True) if next of current ptr points to the External ptr (temp)
        Node *next = curr->next;   //A next ptr for storing pointer of current
        curr->next = temp;
        curr = next; 
    }
    return 0;
}

//Using an unordered_set - Easy aff : Takes O(n) time, O(n) Aux Space
int hasLoopM3(Node *head){
    unordered_set<Node *> s;
    for(Node *curr = head; curr!=nullptr; curr = curr->next){  //Traverse from head until we find null
        if(s.find(curr) != s.end()) return 1; //if set contains current then return true

        s.insert(curr);
    }
    return 0;

}

//Important : Floyd's Cycle detection technique using two ptrs: slow and fast
int hasLoopM4(Node *head){
    
    //Move slow one node at a time and fast two nodes at a time
    Node *slow_ptr = head, *fast_ptr = head;
    while(fast_ptr != nullptr && fast_ptr->next != nullptr){
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;

        if(slow_ptr == fast_ptr) return 1;
    }
    return 0;
    

}
int main(int argc, char const *argv[])
{
    head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
   
    head -> next = temp1;
    temp1->next =  temp2;
    temp2->next =  temp3;
    temp3->next = temp4;
    // temp4->next = temp2;   //Line for adding a cycle to the LInked List
    
    // cout<<hasLoopM1(head);
    // cout<<hasLoopM2(head);
    //cout<<hasLoopM3(head);
    cout<<hasLoopM4(head);
    
    return 0;
}

