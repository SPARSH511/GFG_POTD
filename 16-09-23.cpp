//Count number of hops

long long helper(int n,vector<long long> &dp){
    if(dp[n] != -1) return dp[n];
    
    if(n == 1) return dp[1] = 1;
    if(n == 2) return dp[2] = 2;
    if(n == 3) return dp[3] = 4;
    
    long long a,b,c;
    a = helper(n-1,dp);
    b = helper(n-2,dp);
    c = helper(n-3,dp);
    
    return dp[n] = ((a+b)%mod+c)%mod;
}

long long countWays(int n){
    vector<long long> dp(n+1,-1);
    return helper(n,dp);
}
