#include<iostream>
#include<string.h>


using namespace std;


void findPattern(char* txt, char* pat){
	int m = strlen(pat);
	int n = strlen(txt);
	
	//cout<<m<<n;
	
	for(int i = 0; i<n-m; ){
		int j;
		
		for(int j = 0; j<m; j++)
			if(pat[j] != txt[i+j]);
				break;
			if(j == m)
				cout<<i<<" ";
		
		if(j == 0)
			i++;
		
		else i = i+j;
	}
}


int main(){
	char txt[] = "ABACDBABACWABAC";
	char pat[] = "ABAC";
	
	
	findPattern(txt, pat);
	
	return 0;
}


