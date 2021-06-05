int longestSubsequence(int n, int a[])
    {
        int i,j,length;
        vector<int>A(n,0);
        A[0]=a[0];
        length=1;
        
        for(i=1;i<n;i++){
            auto temp= lower_bound(A.begin(),A.begin()+length,a[i]);
            if(temp==A.begin()+length){
                A[length++]=a[i];
            }
            else{
                *temp=a[i];
            }
        }
        
        return length;
       
    }