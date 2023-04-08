bool f(int i, int k, vector<int> &arr,int n,vector<vector<int>> &dp){
	if(k==0) return true; 
	if(i==0) return (arr[0]==k);
	if(dp[i][k]!=-1) return dp[i][k];
	bool notTake = f(i-1,k,arr,n,dp);
	bool take = false;
	if(arr[i]<=k) take = f(i-1,k-arr[i],arr,n,dp);

	return dp[i][k] = notTake | take;
}

bool canPartition(vector<int> &arr, int n)
{
	// Write your code here.
	
	int target = 0;
	for(int i = 0;i<n;i++){
		target+=arr[i];
	}
	vector<vector<int>> dp(n+1,vector<int> (target/2+1,-1));
	if(target%2!=0) return false;

	
	return f(n-1,target/2,arr,n,dp);
	
}
