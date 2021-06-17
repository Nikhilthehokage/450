int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
    int DP[101][101][101];
    for(int i=0;i<101;i++){
        DP[i][0][0]=0;
    }
    for(int i=0;i<101;i++){
        DP[0][i][0]=0;
    }
    for(int i=0;i<101;i++){
        DP[0][0][i]=0;
    }
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            for(int k=1;k<=n3;k++){
                if(A[i-1]==B[j-1] && B[j-1]==C[k-1]){
                    DP[i][j][k]=1+DP[i-1][j-1][k-1];
                }
                else{
                    DP[i][j][k]=max(max(DP[i-1][j][k],DP[i][j-1][k]),DP[i][j][k-1]);
                }
            }
        }
    }
   
    
    
    return DP[n1][n2][n3];
    
    
}