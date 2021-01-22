#include<iostream>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
} *head = NULL;


//create a linked list from 1 to 10:
void create(int arr[], int n)
{
    struct Node *temp = NULL;
    struct Node *tail = NULL;
    head = new Node;
    head->data = arr[0];
    head->next = NULL;
    temp = head;

    for (int i = 1; i < n; i++)
    {
        tail = new Node;
        tail->data = arr[i];
        tail->next = NULL;
        temp->next = tail;
        temp = tail;
    }
}


//insert node at beginning:
void insertAtFirst(struct Node*p,int value)
{
    struct Node *temp = NULL;
    temp = new Node;
    temp->data = value;
    temp->next = head;
    head = temp;

}
//insert node in the middle:
void insertAtMid(struct Node *p,int pos,int value)  
{
    struct Node *temp = NULL;
    int i;
    temp = new Node;
    temp->data = value;
    
    for(i = 0;i<pos-1;i++)
    {
        p = p->next;
    }

    temp->next = p->next;
    p->next = temp ;

    
}


//find sum of all the elements in the list:
int sum(struct Node *p)
{
    int sum = 0;
    while(p!=NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

//display the list:
void display(struct Node *p)
{
    while (p!=NULL)
    {
        
        printf("%d->", p->data);
        p = p->next;
    }
    printf("\n");
    printf("\n");
}

//count the number of nodes in the list:
int count(struct Node *p)
{
    int count = 0;
    while(p!=NULL)
    {
        count+=1;
        p = p->next;
    }
    return count;
}

//delete the node at pos:
int dalit(struct Node *p,int pos)
{
    int x;
    struct Node *q = NULL;
    for(int i = 0;i<pos-1;i++)
    {
        q = p;
        p = p->next;
    }
    x = p->data;
    q->next = p->next;
    free(p);
    return x;

}

int maxElement(Node* p){
    int max = INT16_MIN;
    while(p!=NULL){
        if(p -> data > max){
            max = p ->data;
            p  = p->next;
            return max;
        }
    }
    return max;

}
//main Function
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    create(arr, len);
    // display(head);
    // insertAtFirst(head,5);
    // display(head);
    // insertAtMid(head,4,25);
    // display(head);
    // int a = delete(head,5);
    // printf("%d",a);
    // printf("\n");
    // display(head);
    // printf("%d",sum(head));
    // printf("\n");

    // printf("%d",count(head));
    cout<<maxElement(head);


    return 0;
}
