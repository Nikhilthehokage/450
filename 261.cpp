class Solution{
public:
    
    int DP[101][10001];
    int solve(int sum,int N,int arr[]){
        if(sum==0){
            return 1;
        }
        if(N==0){
            return 0;
        }
        if(DP[N-1][sum]!=-1){
            return DP[N-1][sum];
        }
        if(arr[N-1]<=sum){
            DP[N-1][sum]=solve(sum-arr[N-1],N-1,arr)||solve(sum,N-1,arr);
        }
        else{
            DP[N-1][sum]=solve(sum,N-1,arr);
        }
        return DP[N-1][sum];
    }
    
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%2!=0){
            return 0;
        }
        sum=sum/2;
        for(int i=0;i<101;i++ ){
            for(int j=0;j<10001;j++){
                DP[i][j]=-1;
            }
        }
        return solve(sum,N,arr);
    }
};
