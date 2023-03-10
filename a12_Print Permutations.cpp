class Solution {
public:

void solve(vector<int>&ds, vector<int>arr, vector<bool>&flag, vector<vector<int>>&ans){

    if(ds.size()==arr.size()){
        ans.push_back(ds); return;
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


//link: https://www.codingninjas.com/codestudio/problems/758958?topList=striver-sde-sheet-problems&leftPanelTab=0









class Solution {
public:
    void solve(vector<int> nums,vector<vector<int>>&ans,int index){
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            solve(nums,ans,index+1);
            swap(nums[index],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        int index=0;
        solve(nums,ans,index);
return ans;
    }
};
