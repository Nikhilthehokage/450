int min(int a,int b){
        return a>b?b:a;
    }

    int nCr(int n, int r){
        if(r>n) return 0;
        if(n-r<r)r=n-r;
        int Dp[r+1];
        memset(Dp, 0, sizeof(Dp));
        Dp[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=min(i,r);j>0;j--){
                Dp[j]=(Dp[j]+Dp[j-1])%1000000007;
            }
        }
        return Dp[r];
    }