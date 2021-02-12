#include<bits/stdc++.h>

using namespace std;
const int N = 1e7+10;
int hashMap[N];

int main(int argc, char const *argv[])
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);

		freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE

	int n;
	cin>>n;
	int arr[n];

	for(int i = 0; i<n; i++){
		cin>>arr[i];
		hashMap[arr[i]]++;
	}

	int q;
	cin>>q;
	while(q--){
		int x; cin>>x;
		cout<<hashMap[x]<<"\t";
	}
	return 0;
}