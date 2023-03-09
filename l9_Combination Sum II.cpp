
#include<bits/stdc++.h>

void solve(int i, int k, vector<int>arr,vector<int>ds, vector<vector<int>>&ans){

	
		if(k==0){
			ans.push_back(ds);
			return;
		}

		for(int j=i;j<arr.size();j++){

			if(j>i&&arr[j]==arr[j-1]) continue;

			if(arr[j]>k) break;

			ds.push_back(arr[j]);
			solve(j+1, k-arr[j], arr, ds, ans);
			ds.pop_back();
		}

}



vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	// Write your code here.
	//combinations sorted order me hone chahye in o/p, so-
	sort(arr.begin(), arr.end());
	vector<vector<int>>ans;
	vector<int>ds;
	solve(0, target,arr,ds, ans);
	
	return ans;

}



//https://leetcode.com/problems/combination-sum-ii/submissions/
