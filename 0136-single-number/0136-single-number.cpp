class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int n = nums.size();
        // int ans;
        // unordered_map<int,int> mp;
        // for(auto val:nums){
        //     mp[val]++;
        // }
        // for(auto it:mp){
        //     if(it.second==1){
        //         ans = it.first;
        //     }
        // }
        // return ans;
        
        // better  approach using xor property
        int xorr =0;
        for(int i =0;i<n;i++){
            xorr = xorr ^ nums[i];
        }
        
        return xorr;
    }
};