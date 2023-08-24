class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int global_count = 0;
        int local_count = 0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                local_count++;
            }
            else {
                if(global_count<local_count){
                    global_count=local_count;
                }
                local_count=0;
            }
        }
        global_count = max(global_count,local_count);
        return global_count;
    }
};