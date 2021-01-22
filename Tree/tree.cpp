#include<iostream>

using namespace std;

struct Queue{
    int front;
    int rear;
    int size;
    Tree *Q;
};

void Create(Queue *q1, int size){
    q1->size = size;
    q1->front = q1->rear = -1;
    q1->Q = new Tree;
    // (int*) malloc (q1->size*sizeof(int));
    // q1->arr = new int[q1->size];
}

void enqueue(Queue *q1, int x){
    if(q1->rear == q1->size-1){
        cout<<"Queue is Full";
        
    }
    else
    {
        q1->rear++;
        q1->Q[q1->rear] = x;
    }
    

}
int dequeue(Queue *q1){
    int x = -1;
    if(q1->front == q1->rear){
        cout<<"Queue is Empty";
    }
    else
    {
        q1->front++;
        x = q1->arr[q1->front];
    }
    return x;
}

int isEmpty(Queue q1){
    if(q1.front == q1.rear) return 1;
    else return 0;
}
int isFull(Queue q1){
    if(q1.rear == q1.size-1) return 1;
    else return 0;
}
struct Tree{
    int key;
    Tree *lchild;
    Tree *rchild;
}*root = NULL;

void TreeCreate(){
    Tree *p, *t;
    int x;
    Queue q1;
    Create(&q1, 50);


}