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
