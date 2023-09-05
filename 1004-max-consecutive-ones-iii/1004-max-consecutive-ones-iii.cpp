class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        int ans = INT_MIN;
        int i = 0;
        int j = 0;
        int zc = 0;
        while(j<n){
            if(nums[j]==0){
                zc++;
            }
            while(zc>k){
                if(nums[i]==0) zc--;
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        
        return ans;
    }
};