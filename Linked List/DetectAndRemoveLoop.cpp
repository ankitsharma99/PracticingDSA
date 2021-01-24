#include<bits/stdc++.h>

using namespace std; 

struct Node{
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        next = nullptr;
        
    }
};


//Easy
void detectRemLoop(Node *head){
    Node *slow = head, *fast = head;

    //USe any detection method and if we get a loop exit from while
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next; fast = fast->next->next;
        if(slow == fast) break;
    }
    //If no loop is found, return
    if(slow != fast) return;

    //Let slow point head
    slow = head;

    //This while loop removes the loop in the Linked List
    while(slow -> next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }

    //This will be the last node of the linked list when the loop has been removed so point it to null 
    fast->next = nullptr;

}

void print(Node *head)
{
    Node *curr= head;
    while(curr!=nullptr){
        cout<<curr->data<<"\t";
        curr = curr->next;
    }
}

int main(int argc, char const *argv[])
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
   
    head -> next = temp1;
    temp1->next =  temp2;
    temp2->next =  temp3;
    temp3->next = temp4;
    temp4->next = temp2;  //This linked List has a loop

    detectRemLoop(head); //This function removes the loop


    print(head);


}