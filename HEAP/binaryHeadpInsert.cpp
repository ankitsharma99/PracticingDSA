#include<bits/stdc++.h>

using namespace std;

struct MinHeap{
    int *arr;
    int size, capacity;

    MinHeap(int capacity){
        
        arr = new int[capacity];
        this->capacity = capacity;
        size = 0;
    }


    int lchild(int x){
        return (2*x+1);
    }
    int rchild(int x){
        return (2*x+2);
    }
    int parent(int x){
        return ((x-1)/2);
    }
    
    
    void Insert(int x){
        if(size == capacity) return;    //return if size of the array is equal to its capacity(This means array is full)
        size++;
        arr[size-1] = x; 

        for(int i = size-1; i != 0 && arr[parent(i)] > arr[i]; ){
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void print(){
        for(int i = 0; i<size; i++){
            cout<<arr[i] <<" ";
        }
    }
};

int main(int argc, char const *argv[])
{
    MinHeap myHeap(10);
    myHeap.Insert(10);
    myHeap.Insert(20);
    myHeap.Insert(15);
    myHeap.Insert(30);
    myHeap.Insert(40);
    myHeap.Insert(18);
    // 

    myHeap.print();
    return 0;
}
