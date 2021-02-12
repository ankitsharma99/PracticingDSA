/*
given 2D array of N*N integers. Givem Q queries and in each query given a, b, c, d
print sum of squares represented by (a, b) as top left point and (c, d) as bottom right point
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;


int arr[N][N];
long long pre_sum[N][N];
int main(int argc, const char *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE

		
		int n; 
		cin>>n;

		for(int i = 1; i<=n; i++){
			for(int j = 1; j<=n; j++){
				cin>>arr[i][j];
				pre_sum[i][j] = arr[i][j] + pre_sum[i-1][j] + pre_sum[i][j-1] - pre_sum[i-1][j-1];
			}
		}

		int Q;
		cin>>Q;

		//Naive af
		// while(Q--){
		// 	int a, b, c, d;
		// 	cin>>a>>b>>c>>d;
		// 	long long sum = 0;
		// 	for(int i = a; i<=c; i++){
		// 		for(int j = b; j<=d; j++){
		// 			sum += arr[i][j];
		// 		}
		// 	}
		// 	cout<<sum<<"\n";
		// }

		//Efficient

		while(Q--){
			int a, b, c, d;

			cin>>a>>b>>c>>d;

			cout<<(pre_sum[c][d] - pre_sum[a-1][d] - pre_sum[c][b-1] + pre_sum[a-1][b-1])<<"\t";
		}




	return 0;
}