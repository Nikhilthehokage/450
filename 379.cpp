long long int A[1001][1001];
    
    long long int solve(int S[], int m, int n){
        if( n==0){
            return 1;
        }
        if(m==0){
            return 0;
        }
        if(A[m][n]!=-1){
            return A[m][n];
        }
        if(S[m-1]<=n){
            A[m][n]= solve(S,m,n-S[m-1])+solve(S,m-1,n);
        }
        else{
            A[m][n]= solve(S,m-1,n);
        }
        return A[m][n];
    }
  
    long long int count( int S[], int m, int n )
    {
       for(int i=0;i<1001;i++){
           for(int j=0;j<1001;j++){
               A[i][j]=-1;
           }
       }
        return solve(S,m,n);
    }