#include<bits/stdc++.h>
using namespace std;
int MaxSumWO3Consec(int n ,vector<int>A){
	int dp[n];
	if(n>=1){
		dp[0]=A[0];
	}
	if(n>=2){
		dp[1]=dp[0]+A[1];
	}
	if(n>=3){
		dp[2]=max(dp[1],max(dp[0]+A[2],A[1]+A[2]));
	}
	for(int i=3;i<n;i++){
		dp[i]=max(dp[i-1],max(dp[i-2]+A[i],dp[i-3]+A[i]+A[i-1]));
	}
	return dp[n-1];
}