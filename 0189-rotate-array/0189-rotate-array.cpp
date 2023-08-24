class Solution {
public:
    // Rotate Clockwise | Rotate Right (Approach1)

    // Time complexity: O(N)
    // Space Complexity: O(1)

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k %= n;

        // Divide the array into two parts 
        // 0 to N-k | N-K+1 To N-1 
        // Reverse both the parts 
        // Reverse the whole array

        for (int i = 0; i < (n-k)/2; i++)
        {
            swap(nums[i], nums[n-k-1-i]);
        }
        
        for (int i = 0; i < k/2; ++i)
        {
            swap(nums[n-k+i], nums[n-i-1]);
        }

        for (int i = 0; i < n/2; ++i)
        {
            swap(nums[i], nums[n-i-1]);
        }
               

        // 1, 2, 3, 4, 5, 6, 7  -> 5, 6, 7, 1, 2, 3, 4 
        // n = 7  |  k = 3

        // 1, 2, 3, 4 | 5, 6, 7                  Divide
        // 4, 3, 2, 1 | 7, 6, 5                  Reverse both part    
        // 5, 6, 7, 1, 2, 3, 4                   Reverse whole array

    }
};