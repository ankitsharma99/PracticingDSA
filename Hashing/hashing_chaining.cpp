//Sorry for a lot pf comments

#include<iostream>
#include "linkedList.h"

using namespace std;

int hashValue(int key){
    return key % 10; //OR key % size,  here size = 10
}

void Insert(Node * H[], int key){  //inserting nodes in array of pointers
    int index = hashValue(key); //index of array of ptrs
    sortedInsertion(&H[index], key);  //soretd insertion from linkedList Heaser file
}

int main(int argc, const char** argv) {
    Node * H[10];  //array of ptrs
    Node * tempp;

    for(int i = 0; i<10; i++){
        H[i] = NULL;
    }

    Insert(H, 12);
    Insert(H, 22);
    Insert(H, 32);
    
    tempp = Serach(H[hashValue(22)], 22); //Storing the value returned by the Search ftn in Node * temp, because it returns a Node pointer

    
    cout<<tempp->data<<endl;

    return 0;
}