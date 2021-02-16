#include<bits/stdc++.h>

using namespace std;

void insert(vector<int> &v, int temp){

    //if last element is less than or equal to temp, put temp at the end and return!
    if(v.size() == 0 || v[v.size() -1] <= temp){
        v.push_back(temp);
        return;
    }


    int val = v[v.size() - 1];   //This is the condition when the previous element is greater than the next element
    v.pop_back();

    //Recursively call for the passed temp
    insert(v, temp);
    //push back when a satisfactory position is found
    v.push_back(val);
}

void sorted(vector<int> &v){

    //if the size of vector is 1 then return, coz the vector is already sorted
    if(v.size() == 1) return;

    //store the last element value in a variable and pop it if the size is not  greater than 1;
    //  When 2 or more elements are given, always do this!
    int temp = v[v.size() - 1];
    v.pop_back();

    //recursively call for v.size() - 1 elements, coz the vector is passed as a reference
    // and v.pop_back() in line number 2 shortens the vector by ONE
    sorted(v);

    //Call the insert function to insert the last element at the appropriate place each time
    insert(v, temp);
}
int main(int argc, char const *argv[])
{

    vector<int> v = {2, 3, 1, 5, 4};
    sorted(v);

    for(auto it : v)
        cout<<it<<"\t";
    return 0;
}

/*
Steps for sorting the array using recursion:
**Visualize each sentence, make a recursion tree and you will get it.


Suppose we are given a vector {3, 2, 1, 5};
We need to sort it recursively - Above is the program and folowing is the step by step explanation:

1. Pass the vector as reference to the called function, so that any change in vector affects everywhere.

2. Check each time you pass the vector, if the vector contains a single element. If it contains, simply return;

3. If the vector consists of multiple elements, do this :
    i. Store the value of last element in "temp"
    ii. pop_back the vector.

4. Call recursively the function! 

After these steps are done for the vector - {3, 2, 1, 5}, we will have three recursion calls in the stack (one will be the returning one).
For 3 recursion call stack, we will have 3 different temp variables, i.e., temp = 5, temp = 1, temp = 2. Note that the vector will have a single element v - {3};


Now, after each recursive call, call an "insert function" that inserts the element at the required position in the sorted array.

5. Check in the insert function, if the vector is empty or if the prev element is smaller than "temp", directly push temp in the vector and return.

6. If Step 5 is not the case, store an element in a variable named val and pop the last element of the vector.

7. Recursively call for the insert function until "temp" is inserted in the vector at the desired position... The sorted function will be working side by side too.

8. Push back the last popped "val" element in the array and boom, your array is sorted! 




Pretty simple? Well it took me 3 hours to think this shit
 */
