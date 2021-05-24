int A[1001][1001];
    int max(int a,int b){
        return a>b?a:b;
    }
    int solve(int W, int wt[], int val[], int n){
        if(W==0 || n==0){
            return 0;
        }
        if(A[n][W]!=-1){
            return A[n][W];
        }
        if(W>=wt[n-1]){
            
            
            A[n][W]=max(solve(W-wt[n-1],wt,val,n-1)+val[n-1],solve(W,wt,val,n-1));
        }
        else{
            
            A[n][W]=solve(W,wt,val,n-1);
        }
        return A[n][W];
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       for(int i=0;i<1001;i++){
           for(int j=0;j<1001;j++){
               A[i][j]=-1;
           }
       }
       return solve(W,wt,val,n);
    }