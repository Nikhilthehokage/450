int maxSquare(int n, int m, vector<vector<int>> mat){
        int A[51][51];
        int max=0;
        for(int i=0;i<n;i++){
            A[i][0]=mat[i][0];
            
        }
         for(int i=0;i<m;i++){
            A[0][i]=mat[0][i];
            
        }
        
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
               if(mat[i][j]==1){
                   
                   A[i][j]=min(A[i-1][j-1],min(A[i-1][j],A[i][j-1]))+1;
                  
               }
               else{
                   A[i][j]=0;
               }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(max<A[i][j]){
                    max=A[i][j];
                }
            }
        }
       
        return max;
    }