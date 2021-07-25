#include<bits/stdc++.h>
using namespace std;

int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
        sort(arr,arr+N); 
        int sum=0;
        for(int i=N-1;i>0;i--){
            if(arr[i]-arr[i-1]<K){
                sum+=arr[i]+arr[i-1];
                i--;
            }
            
        }
        return sum;
    }