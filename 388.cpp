int max(int a,int b,int c){
        return a>b?(a>c?a:c):(b>c?b:c);
    }
    int max1(int a, int b){
        return a>b?a:b;
    }
    int DP[51][51];
    int solve(int n, int m , vector<vector<int>> &M,int i, int j){
        if(i>=n || i<0 || j>=m ||j<0){
            return 0;
        }
        if(DP[i][j]!=-1){
            return DP[i][j];
        }
        DP[i][j]=M[i][j]+max(solve(n,m,M,i,j+1),solve(n,m,M,i-1,j+1),solve(n,m,M,i+1,j+1));
        return DP[i][j];
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
       int c=0;
       for(int i=0;i<=n;i++){
           for(int j=0;j<=m;j++){
               DP[i][j]=-1;
           }
       }
       for(int i=0;i<n;i++){
           c=max1(c,solve(n,m,M,i,0));
       }
       return c;
    }