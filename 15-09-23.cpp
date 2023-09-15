//Partition Equal Subset Sum

int solve(int n,int arr[],int ind,int sum,vector<vector<int>> &dp){
        if(sum < 0) return 0;
        if(ind >= n){ 
            if(sum == 0) return 1;
            return 0;
        }
        if(dp[ind][sum] != -1) return dp[ind][sum];
        int pick = solve(n,arr,ind+1,sum-arr[ind],dp);
        int notpick = solve(n,arr,ind+1,sum,dp);
        return dp[ind][sum] = notpick|pick;
    }
    int equalPartition(int n, int arr[]){
        // code here
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum&1) return 0;
        else{
            vector<vector<int>> dp(n+1,vector<int>(sum/2+1,-1));
            return solve(n,arr,0,sum/2,dp);
        }
    }
