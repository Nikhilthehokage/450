 int DP[101][101];
    int min(int a,int b,int c){
        return a>b?(b>c?c:b):(a>c?c:a);
    }
    int solve(string s, string t,int M, int N){
        if(N==-1){
            return M+1;
        }
        if(M==-1){
            return N+1;
        }
        if(DP[M][N]!=-1){
            return DP[M][N];
        }
        if(s[M]==t[N]){
            return DP[M][N]=solve(s,t,M-1,N-1);
        }
        
        DP[M][N]=min(solve(s,t,M-1,N),solve(s,t,M-1,N-1),solve(s,t,M,N-1))+1;
        return DP[M][N];
    }
    int editDistance(string s, string t) {
        int M=s.length()-1;
        int N=t.length()-1;
        for(int i=0;i<=M;i++){
            for(int j=0;j<=N;j++){
                DP[i][j]=-1;
            }
        }
        return solve(s,t,M,N);
    }