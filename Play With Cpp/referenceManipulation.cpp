#include<bits/stdc++.h>

using namespace std;
int x;
// int fun();  the fun should have a refernce return type

int & fun(){
    return x;
}


//if fun does not have an int reference type, then it will be unable to assign a value at line number 22
int main(int argc, char const *argv[])
{

    x = 100;
    int Y;
    Y = fun();
    cout<<"Val of x is : "<<Y<<"\t";

    fun() = 200;

    // cout<<fun();  
    Y = fun();   //200 goes into Y
    cout<<"val of x is : "<<Y<<"\n";   //Val of x is Y = 200


    return 0;
}

