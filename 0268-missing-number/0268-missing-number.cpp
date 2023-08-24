#include<bits/stdc++.h>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans;
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        for(int i=0;i<=n;i++){
            if(s.find(i)==s.end()){
                ans = i;
            }
        }
        
        return ans;
    }
};