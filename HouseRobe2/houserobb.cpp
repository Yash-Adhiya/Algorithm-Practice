#include <bits/stdc++.h> 

long long int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n=  nums.size();
    long long int prev = nums[0];
    long long int prev2 = 0;

    for(int i=1;i<n;i++){
        
        long long int pick = nums[i];
        if(i>1) {pick+=prev2;}
        long long int notPick = 0;
        if(i>0) {
            notPick+=prev;
        }

        long long int curri = max(pick,notPick);
        prev2 = prev;
        prev = curri;
    }
    return prev;
}

long long int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here.
    int n = valueInHouse.size();
    if(n==1) return valueInHouse[0];
    vector<int> temp1,temp2;
    for(int i = 0;i<n;i++){
        if(i!=0) temp1.push_back(valueInHouse[i]);
        if(i!=n-1) temp2.push_back(valueInHouse[i]);

        
    }

    return max(maximumNonAdjacentSum(temp1),maximumNonAdjacentSum(temp2));

}