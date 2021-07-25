int dp[501][501];
    int solve(int r, int c,vector<vector<int>>& Matrix,int N ){
        if(r<0 || c<0 || c>=N){
            return 0;
        }
        if(dp[r][c]!=-1){
            return dp[r][c];
        }
        dp[r][c]= max(solve(r-1,c,Matrix,N),max(solve(r-1,c-1,Matrix,N),solve(r-1,c+1,Matrix,N)))+Matrix[r][c];
        return dp[r][c];
    }
    
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        for(int i=0;i<=N;i++){
            for(int j=0;j<=N;j++){
                dp[i][j]=-1;
            }
        }
        int max=0,temp=0;
       for(int i=N-1;i>=0;i--){
           temp=solve(N-1,i,Matrix,N);
           if(max<temp){
               max=temp;
           }
       }
       return max;
    }