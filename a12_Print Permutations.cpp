class Solution {
public:

void solve(vector<int>&ds, vector<int>arr, vector<bool>&flag, vector<vector<int>>&ans){

    if(ds.size()==arr.size()){
        ans.push_back(ds);
    }

    for(int i=0;i<arr.size();i++){
        if(flag[i]!=1){
            ds.push_back(arr[i]);
            flag[i]=1;
            solve(ds, arr, flag, ans);
            flag[i]=0;
            ds.pop_back();
        }
    }
}
    vector<vector<int>> permute(vector<int>& arr) {
        vector<vector<int>>ans;
        vector<bool>flag(arr.size(), 0);
        vector<int>ds;
        solve(ds, arr, flag, ans);
        return ans;
        
    }
};
