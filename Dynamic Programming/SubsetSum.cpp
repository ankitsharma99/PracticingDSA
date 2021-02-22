/*
I was running this code without giving any input and thought my system hanged wtf
*/

#include<bits/stdc++.h>
using namespace std;

bool SubsetSum(int set[], int n, int sum)
{
	
	bool subset[n + 1][sum + 1];

	for (int i = 0; i <= n; i++)
    //if sum is not 0 and set is also not empty then dp[i][j] should be true
		subset[i][0] = true;

	// If sum is not 0 and set is empty, then dp[i][j] should be false
	for (int i = 1; i <= sum; i++)
		subset[0][i] = false;

	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
            if (j >= set[i - 1])
				subset[i][j] = subset[i - 1][j] || subset[i - 1][j - set[i - 1]];
			if (j < set[i - 1])
				subset[i][j] = subset[i - 1][j];
			
		}
	}

	
	return subset[n][sum];
}



int main()
{
	int n; cin>>n;
    int sum; cin>>sum;
    int set[n];
    for(int i = 0; i<n; i++){
        cin>>set[i];
    }

	if (SubsetSum(set, n, sum) == true)
		printf("YES");
	else
		printf("NO");
	return 0;
}

