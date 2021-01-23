#include<bits/stdc++.h>

using namespace std; 

struct Node{
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
}*head  = NULL;


//O(n) Time and O(n) Space
/*
This method uses a vector that stores the element from head to end and then puts back the elements in the linked list from v.pop_back() method.
*/
Node *reverse1(Node * head){

    vector<int> v;

    for(Node * curr = head; curr!= NULL; curr = curr->next){
        v.push_back(curr->data);
    }

    for(Node *curr = head; curr != NULL; curr = curr->next){
        curr->data = v.back();
        v.pop_back();
    }
    return head;
}

//Using Three Pointer approach -> next, prev and curr:
void reverse2()
	{
		
		Node* curr = head;
		Node *prev = NULL, *next = NULL;

		while (curr != NULL) {
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


void print(Node * head){
    Node * curr =head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }

}

int main(int argc, char const *argv[])
{
    // int n;
    // cin>>n; 
    // int arr[n];

    // for(int i =0; i<n; i++){
    //     cin>>arr[i];
    // }

    // Node *head = new Node(arr[0]);

    // Node *last = head;
    // Node *t;

    // for(int i = 1; i<n; i++){
    //     t = new Node(arr[i]);
    //     last ->next = t;
    //     last = t;
    // }

    head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
   
    head -> next = temp1;
    temp1->next =  temp2;
    temp2->next =  temp3;
    temp3 -> next = temp4;
    
    
    reverse2();

    print(head);
    // Node * curr = head;

    // while(curr != NULL){
    //     cout<<curr->data<<"\t"<<"==>";
    //     curr = curr->next;
    // }

    return 0;
}
