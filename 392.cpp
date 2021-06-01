int DP[1001][1001];
    
    int lcs(int x, int y, string s1, string s2)
    {
        for(int i=0;i<1001;i++){
            DP[i][0]=0;
        }
        for(int i=0;i<1001;i++){
            DP[0][i]=0;
        }
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(s1[i-1]==s2[j-1]){
                    DP[i][j]=1+DP[i-1][j-1];
                }
                else{
                    DP[i][j]=max(DP[i-1][j],DP[i][j-1]);
                }
            }
        }
        return DP[x][y];
    }