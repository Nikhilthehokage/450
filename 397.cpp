int maxSumIS(int arr[], int n)  
	{  
	    vector<int>A(n,0);
	    for(int i=0;i<n;i++){
	        A[i]=arr[i];
	    }
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(arr[j]<arr[i] && A[j]+arr[i]>A[i]){
	                A[i]=A[j]+arr[i];
	            }
	        }
	    }
	    int max=0;
	    for(int i=0;i<n;i++){
	        //cout<<A[i]<<" ";
	        if(max<A[i]){
	            max=A[i];
	            
	        }
	    }
	    return max;
	}  