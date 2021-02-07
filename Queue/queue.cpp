#include<iostream>

using namespace std;

struct Queue{
    int front;
    int rear;
    int size;
    int *arr;
};

void Create(Queue *q1, int size){
    q1->size = size;
    q1->front = q1->rear = -1;
    
    q1->arr = new int[q1->size];
}

void enqueue(Queue *q1, int x){
    if(q1->rear == q1->size-1){
        cout<<"Queue is Full";
    }
    else
    {
        q1->rear++;
        q1->arr[q1->rear] = x;
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
void Display(Queue q1){
    int i;
    for (i  = q1.front+1; i<q1.rear; i++){
        cout<<q1.arr[i]<<" ";
    }
    cout<<endl;
}
int isEmpty(Queue q1){
    if(q1.front == q1.rear) return 1;
    else return 0;
}
int isFull(Queue q1){
    if(q1.rear == q1.size-1) return 1;
    else return 0;
}

int main(){
    Queue q1;
    Create(&q1, 5);
    enqueue(&q1, 1);
    enqueue(&q1, 2);
    
    enqueue(&q1, 3);enqueue(&q1, 5);enqueue(&q1, 4);
    
    
    Display(q1);
    cout<<endl<<isFull(q1)<<" "<<isEmpty(q1);
    cout<<endl;   
    cout<<dequeue(&q1);
    cout<<dequeue(&q1);
    cout<<dequeue(&q1);
    cout<<dequeue(&q1);
    cout<<dequeue(&q1);
    
    cout<<dequeue(&q1);
    cout<<dequeue(&q1);
    cout<<endl<<isFull(q1)<<" "<<isEmpty(q1);
    // dequeue(&q1);
    // dequeue(&q1);
    // dequeue(&q1);
    // dequeue(&q1);
    // Display(q1);



    return 0;
}
