#include<bits/stdc++.h>

using namespace std;


//Recursive Approach _ Easy Af

int min(int x, int y, int z) 
{
    return min(min(x, y), z); 
     
}
int EditDistance(string s1, string s2, int m, int n) {
    if(m == 0) return n;
    if(n == 0) return m;

    if(s1[m-1] == s2[n-1]){
        return EditDistance(s1, s2, m-1, n-1);
    }else{
        return 1 + min(EditDistance(s1, s2, m-1, n), EditDistance(s1, s2, m, n-1), EditDistance(s1, s2, m-1, n-1));
    }
}




int main () {

    string s1, s2;
    cin>>s1 >> s2;
    int m = s1.length();
    int n = s2.length();

    cout<<EditDistance(s1, s2, m, n);

    return 0;

}