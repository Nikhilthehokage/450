int equalPartition(int n, int a[])
    {
        int sum = 0;
        for(int i=0;i<n;i++)sum = sum + a[i];
        
        if(sum%2!=0)return 0;
        
        int sum1 = sum/2;
        
        bool dp[n+1][sum1+1];
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum1+1;j++)
            {
                if(i==0)dp[i][j]=0;
                if(j==0)dp[i][j]=1;
            }
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum1;j++)
            {
                if(a[i-1]<=j)
                {
                    dp[i][j] = dp[i-1][j-a[i-1]]||dp[i-1][j];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][sum1];
    }