#include<bits/stdc++.h>

using namespace std;

void insert(vector<int> &v, int temp){

    //if last element is less than or equal to temp, put temp at the end and return!
    if(v.size() == 0 || v[v.size() -1] <= temp){
        v.push_back(temp);
        return;
    }

    //Store the last element and remove it from the vector
    int val = v[v.size() - 1];
    v.pop_back();

    //Recursively call for all elements 
    insert(v, temp);
    //push back when a satisfactory position is found
    v.push_back(val);
}

void sorted(vector<int> &v){

    //if the size of vector is 1 then return, coz the vector is already sorted
    if(v.size() == 1) return;

    //store the last element value in a variable and pop it
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
