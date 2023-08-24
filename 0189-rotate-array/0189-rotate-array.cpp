class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int r = k%n;
        
        vector<int> temp;
        for(int i = n-r;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i = 0;i<n-r;i++){
            temp.push_back(nums[i]);
        }
        
        for(int i = 0;i<n;i++){
            nums[i] = temp[i];
        }
        
       
    }
};