// recursion solution used memoiation 

int f(int day, int last, int n, vector<vector<int>> &points,vector<vector<int>> &dp){
    if(day == 0){
        int maxi = 0;
        for(int i = 0;i<3;i++){
            if(i!=last) {
                maxi = max(maxi,points[0][i]);
            }
        }

        return dp[0][last]=maxi; 
    }

    if(dp[day][last]!=-1) return dp[day][last];

    int maxi = 0;
    for(int task = 0;task<3;task++){
        if(task!=last){
            int point = points[day][task] + f(day-1,task,n,points,dp);
            maxi = max(point,maxi);
        }
    }

    return dp[day][last]=maxi; 
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>> dp(n,vector<int> (4,-1));
    return f(n-1,3,n,points,dp);
}