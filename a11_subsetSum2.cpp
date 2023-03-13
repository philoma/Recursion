
#include<bits/stdc++.h>

void solve(int i, vector<int>arr,vector<int>ds, vector<vector<int>>&ans){

	
			ans.push_back(ds);

		for(int j=i;j<arr.size();j++){

			if(j>i&&arr[j]==arr[j-1]) continue;


			ds.push_back(arr[j]);
			solve(j+1, arr, ds, ans);
			ds.pop_back();
		}

}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(), arr.end());
	vector<vector<int>>ans;
	vector<int>ds;
	solve(0, arr,ds, ans);
	

    return ans;
}


// https://www.codingninjas.com/codestudio/problems/unique-subsets_3625236?topList=striver-sde-sheet-problems
