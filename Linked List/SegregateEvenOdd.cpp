#include<bits/stdc++.h>

using namespace std;


//Structure of a Linked Lisr
struct Node{
	int data;
	Node * next;
	Node (int data){
		this->data = data;
		next = nullptr;
	}
};


//Print a linked List
void print(Node * head){
	Node *curr = head;
	while(curr != nullptr){
		cout<<curr->data<<"\t"<<"=>"<<"\t";
		curr = curr->next;
	}
}


/*Given a LL, segregate its even and odd elements such that the order does not get disturbed*/
Node  *SegregateEvenOdd(Node * head){
	Node *evenStarting = nullptr, *evenEnding = nullptr, *oddStarting = nullptr, *oddEnding = nullptr;

	for(Node * curr = head; curr!= nullptr; curr=curr->next){


		//Case when an element is EVEN
		if(curr->data %2 == 0){

			if(evenStarting == nullptr){
				evenStarting = curr;
				evenEnding = evenStarting;
			}
			
			else {
				evenEnding->next = curr;
				evenEnding = evenEnding->next;
			}
		}

		//Case when an element is odd
		else{

			if(oddStarting == nullptr){
				oddStarting = curr;
				oddEnding = oddStarting;
			}

			else{
				oddEnding->next = curr;
				oddEnding = oddEnding->next;
			}
		}
	} //End of FOR LOOP

	if(oddStarting == nullptr || evenStarting == nullptr){
		return head;
	}
	evenEnding->next = oddStarting;
	oddEnding->next = nullptr;

	return evenStarting;
}


//Main Function
int main(int argc, char const *argv[])
{
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

	Node *getter = SegregateEvenOdd(head);
	print(getter);
	
		return 0;
}