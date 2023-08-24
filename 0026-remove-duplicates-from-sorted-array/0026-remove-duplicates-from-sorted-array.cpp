class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        int n=nums.size();
//         for(int i = 1;i<n;i++){
//             if(nums[i]!=nums[i-1]){
//                 nums[index+1] = nums[i];
//                 index++;
//             }
//         }
        
//         return index +1;
//         TC=  O(N)
//         SC = O(1)
        
        //using set
        set<int> s;
        for(int i = 0;i<n;i++){
            s.insert(nums[i]);
        }
        nums.clear();
        for(auto i:s){
            nums.push_back(i);
        }
        
        return s.size();
        
    }
};