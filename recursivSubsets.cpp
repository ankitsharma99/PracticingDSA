#include<bits/stdc++.h>

#define endl "\n"
#define tab "\t"
using namespace std;

void printSubsets(string str, string curr, int index){
	if(index == str.length()){
		cout<<curr<<tab;
		return;
	}


	printSubsets(str, curr, index+1);
	printSubsets(str, curr+str[index], index+1);
}


int main(int argc, char const *argv[])
{
	string str = "A";
	string curr = " ";
	int index = 0;

	printSubsets(str, curr, index);
	return 0;
}