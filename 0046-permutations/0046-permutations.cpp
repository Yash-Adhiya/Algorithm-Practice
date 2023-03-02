class Solution {
public:
    
    void genPermutation(int ind, int hash[], vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i = 0;i<nums.size();i++){
            if(!hash[i]){
                ds.push_back(nums[i]);
                hash[i] = 1;
                genPermutation(i+1,hash,nums,ds,ans);
                ds.pop_back();
                hash[i] = 0;
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int hash[nums.size()];
        for(int i = 0;i<nums.size();i++){
            hash[i] = 0;
        }
        
        vector<int> ds;
        vector<vector<int>> ans;
        
        genPermutation(0,hash,nums,ds,ans);
        
        return ans;
    }
};