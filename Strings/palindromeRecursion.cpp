#include<bits/stdc++.h>
          
using namespace std;

int isPal(String &str, int start, int end){
    if(start >= end)
        return true;
    return((str[start] == str[end]) && isPal(str, start+1, end-1));
}      
          
int main() {
    string str = "malayalam";      
    int start = 0, end = str.length() - 1;

    cout<<isPal(str, start, end);
    return 0;
}