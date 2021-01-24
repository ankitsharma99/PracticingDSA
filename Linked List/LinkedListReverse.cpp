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


//O(n) Time and O(n) Space
/*
This method uses a vector that stores the element from head to end and then puts back the elements in the linked list from v.pop_back() method.
*/
Node *reverse1(Node * head){

    vector<int> v;

    for(Node * curr = head; curr!= nullptr; curr = curr->next){
        //pushing data of linked list in the array
        v.push_back(curr->data);
        
    }

    for(Node *curr = head; curr != nullptr; curr = curr->next){
        //put the data back into the Linked List
        curr->data = v.back();
        v.pop_back();
    }
    return head;
}

//Using Three Pointer approach -> next, prev and curr:
void reverse2(){
		Node* curr = head;
		Node *prev = nullptr;
        Node *next = nullptr;

		while (curr != nullptr) {
			// Store next
			next = curr->next;

			// Reverse current node's pointer
			curr->next = prev;

			// Move pointers one position ahead.
			prev = curr;
			curr = next;
		}
		head = prev;
}

Node *recursiveReverse1(Node *head){
     if (head == nullptr || head->next == nullptr) {
    return head;
  }

  Node* reversed_list = recursiveReverse1(head->next);

  head->next->next = head;
  head->next = nullptr;
  return reversed_list;
}


void print(Node * head){
    Node * curr =head;
    while(curr != NULL){
        cout<<curr->data<<"\t";
        curr = curr->next;
    }

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
    temp3 -> next = temp4;
    
    cout<<"Before Reversal"<<"\t"<<": "<<"\n";
    print(head);
    cout<<"\n";

    
    Node *ret = recursiveReverse1(head);

    cout<<"After Reversal"<<"\t"<<": "<<"\n";

    
    print(ret);

    return 0;
}
