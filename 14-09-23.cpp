  //Perfect Sum

  int helper(int arr[],int n,int sum,int ind,vector<vector<int>> &dp){
	    if(sum < 0) return 0;
	    if(ind >= n){
	        if(sum == 0) return 1;
	        return 0;
        }
        if(dp[ind][sum] != -1) return dp[ind][sum];
        int pick = helper(arr,n,sum-arr[ind],ind+1,dp)%mod;
	    int notpick = helper(arr,n,sum,ind+1,dp)%mod;
        return dp[ind][sum] = (pick+notpick)%mod;
	}
	int perfectSum(int arr[], int n, int sum){
        // Your code goes here
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        return helper(arr,n,sum,0,dp);
	}
