int maxSubstring(string S)
	{
	    int curr,max,length=S.length();
	    vector<int>arr(length,0);
	    for(int i=0;i<length;i++){
	        if(S[i]=='1'){
	            arr[i]=-1;
	        }
	        else{
	            arr[i]=1;
	        }
	    }
	    curr=max=arr[0];
	    for(int i=1;i<length;i++){
	        if(curr+arr[i]<=arr[i]){
	            curr=arr[i];
	        }
	        else{
	            curr+=arr[i];
	        }
	        if(max<curr){
	            max=curr;
	        }
	    }
	    return max;
	}