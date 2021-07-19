#include<bits/stdc++.h>
using namespace std;
int ProductSubseqCount(vector<int> &array ,int k){
	int n=array.size();
	int dp[k+1][n+1];
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=0;
		}
	}
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=dp[i][j-1];
			if(array[j-1]<=i && array[j-1]>0){
				dp[i][j]+=dp[i/array[j-1]][j-1]+1;
			}
		}
	}
	return dp[k][n];
}