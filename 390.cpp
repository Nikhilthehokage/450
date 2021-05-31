long long DP[100001];
    long long solve(int n ,int k){
        if(n==0){
            return 0;
        }
        if(n==1){
            return k;
        }
        if(n==2){
            return k*(k)%1000000007;
        }
        if(DP[n]!=-1){
            return DP[n];
        }
       return  DP[n]=(k-1)*(solve(n-1,k)+solve(n-2,k))%1000000007;
        
    }
    
    long long countWays(int n, int k){
        for(int i=0;i<100001;i++){
            DP[i]=-1;
        }
       return solve(n,k);
    }