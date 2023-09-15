class Solution {
public:
    int lower_bound(vector<int> &nums,int target){
        int n = nums.size();
        int ans = n;
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>=target){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid +1;
            }
        }
        
        return ans; 
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        
        int start = lower_bound(nums,target);
        int end = lower_bound(nums,target + 1) -1;
        if(start<nums.size() && nums[start]==target){
            return {start,end};
        }
        
        return {-1,-1};
        
    }
};