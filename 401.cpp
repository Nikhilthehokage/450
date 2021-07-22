int dp[201][201];
    int solve(int n ,int k){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(k==1){
            return n;
        }
        int min=100000,temp=0;
        if(dp[n][k]!=-1){
            return dp[n][k];
        }
        for(int i=1;i<n;i++){
            if(dp[n-i][k]==-1){
                dp[n-i][k]=solve(n-i,k);
            }
           
            if(dp[i-1][k-1]==-1){
                dp[i-1][k-1]=solve(i-1,k-1);
            }
           temp=max(dp[n-i][k],dp[i-1][k-1])+1;
            if(min>temp){
                min=temp;
            }
        }
        return dp[n][k]=min;
    }
    int eggDrop(int n, int k) 
    {
        for(int i=0;i<201;i++){
            for(int j=0;j<201;j++){
                dp[i][j]=-1;
            }
        }
        return solve(k,n);
	}