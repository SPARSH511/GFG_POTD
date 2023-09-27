int solve(int arr[],int n,int ind,vector<int> &dp){
    if(ind>=n) return 0;
    if(dp[ind] != -1) return dp[ind];
    int include = solve(arr,n,ind+2,dp)+arr[ind];
    int exclude = solve(arr,n,ind+1,dp);
    return dp[ind] = max(include,exclude);
}
int FindMaxSum(int arr[], int n){
    // Your code here
    // vector<int> dp(n+1,-1);
    // dp[0] = 0;
    // dp[1] = arr[0];
    
    // for(int i = 2; i <= n; i++) {
    //     int case1 = arr[i-1] + dp[i-2];
    //     int case2 = dp[i-1];
        
    //     dp[i] = max(case1, case2);
    // }
    // return dp[n];
    vector<int> dp(n,-1);
    return solve(arr,n,0,dp);
}
