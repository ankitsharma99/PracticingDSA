/*
Given an array of N integers. Given Q queries and in each query given L and R print sum of array elements from index L to R(L, R included)
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
int a[N];
int pre_sum[N];
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);

		freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE

	int n;
	cin>>n;
	// int arr[n];
	for(int i = 1; i<=n; i++){
		cin>>a[i];
		pre_sum[i] = pre_sum[i-1] + a[i];
	}

	int Q;
	cin>>Q;

	//NAIVE
	//O(Q*N)
	// while(Q--){
	// 	int L, R;
	// 	cin >>L >> R;

	// 	int sum = 0;
	// 	for(int  i = L; i<= R; i++){
	// 		sum += a[i];
	// 	}

	// 	cout << sum<< "\t";
 // 	}


	//O(N)
	while(Q--){
		int L, R;

		cin>>L>>R;
		cout<<pre_sum[R] - pre_sum[L-1]<<"\t";
	}


	return 0;
}