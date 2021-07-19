#include<bits/stdc++.h>
using namespace std;
int longestSubsequence(int N, int A[])
    {
       int dp[N];
       for(int i=0;i<N;i++){
           dp[i]=1;
       }
       for(int i =1;i<N;i++){
           for(int j=0;j<i;j++){
               if(abs(A[j]-A[i])==1 && dp[j]+1>dp[i]){
                   dp[i]=dp[j]+1;
               }
           }
       }
       int max=1;
       for(int i=0;i<N;i++){
           if(max<dp[i]){
               max=dp[i];
           }
       }
       return max;
    }