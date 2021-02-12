#include<bits/stdc++.h>

using namespace std;


vector<vector<int>> getSubsets(vector<int> &nums){

	//Calculate size of nums vector
	int size = nums.size();
	int subsetNum = (1<<size);	//calculate 2^size as there will be 2^size number of subsets

	vector<vector<int>> v;	 	//vector for returning

	for(int bitMask = 0; bitMask<subsetNum; bitMask++){  		//iterating from 0 - 2^size
		vector<int> subsets; 					//subsets vector for adding elements if condition comes true
		for(int i = 0; i<size; i++){				//iterate from 0 to size of nums array to check element's set bit
			if((bitMask & (1<<i) ) != 0){				//Checking element's ste bit
				subsets.push_back(nums[i]);    /// push element into subsets(1D vector) if it's ith bit is set
			}
		}
		v.push_back(subsets);				//push back the subsets vector int the resultant vector
	}

	return v;

}

int main(int argc, char const *argv[])
{

	#ifndef ONLINE_JUDGE

		freopen("input.txt", "r", stdin);

		freopen("output.txt", "w", stdout);

	#endif // ONLINE_JUDGE

	vector<int> nums = { 1, 2,3 };



	vector<vector<int>> recSubsets = getSubsets(nums);


	for(auto elem : recSubsets){ 				//use a range based for - l;oop

		for(auto x : elem){						//another range based for loop, which works for every internal vector
			cout<<x<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}