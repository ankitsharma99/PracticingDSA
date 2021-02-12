#include<bits/stdc++.h>

using namespace std;
const int N = 1e7+10;
int arr[N];
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);

		freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE

	int n, m;
	cin>>n>>m;

	while(m--){
		int a, b, k;
		cin>>a>>b>>k;

		arr[a] += k;
		arr[b+1] -= k;
	}

	for(int i =1 ; i<=n; i++){
		arr[i] += arr[i-1];
	}

	
	long long maxi = -1;
	for (int i = 1; i <= n; ++i)
	{
		if(maxi < arr[i]){
			maxi = arr[i];
		}
	}

	cout<<maxi;
	return 0;
}