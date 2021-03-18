#include<bits/stdc++.h>

using namespace std;



int LCS(string str1, string str2, int len1, int len2){
    if(len1 == 0 || len2 == 0){
        return 0;
    }


    if(str1[len1-1] == str2[len2-1])
        return 1 + LCS(str1, str2, len1-1, len2-1);
    
    else
        return max(LCS(str1, str2, len1-1, len2), LCS(str1, str2, len1, len2-1));

}

int main() {
    string str1;
    string str2;

    cin>>str1>>str2;

    int s1 = str1.length();
    int s2 = str2.length();


    cout<<LCS(str1, str2, s1, s2);




    return 0;
}