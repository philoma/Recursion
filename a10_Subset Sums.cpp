//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{
public:

void solve(int i, vector<int>&ans, vector<int>arr, int sum ){
    
    if(i>=arr.size()){
        ans.push_back(sum);
        return;
    }
    //pick
    sum+=arr[i];
    
    solve(i+1, ans, arr, sum);
    
    //not pick
    sum-=arr[i];
    solve(i+1, ans, arr, sum);
    
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>v;
        int i=0,sum=0;
        solve(i, v,arr, sum);
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends



// https://practice.geeksforgeeks.org/problems/subset-sums2234/1
