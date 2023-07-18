class Solution {
public:
    
    int f(int i,int target, int n,vector<int>& nums,vector<vector<int>> &dp ){
        // base conditon 
        
        if(i==0){
            if(target==0 and nums[0]==0){
                return 2;
            }
           if(target==0 || target == nums[0]){
               return 1;
           }
             return 0;
        }
        
        if(i==0) return nums[i]==target;
        
        // memoiation conditon 
        
        if(dp[i][target]!=-1) return dp[i][target];
        
        int nottaken = f(i-1,target,n, nums,dp);
        int taken = 0;
        if(nums[i]<=target) taken = f(i-1,target-nums[i],n,nums,dp);
        
        return dp[i][target] = taken + nottaken;
    }
        
        
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
       
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum+=nums[i];
        }
        
        if((sum-target)<0) return 0;
        if((sum-target)%2==1) return 0;
        int newtarget = (sum-target)/2; 
         vector<vector<int>> dp(n+1,vector<int>(newtarget+1,-1));
        
        return f(n-1,newtarget,n,nums,dp);
        
        
    }
};