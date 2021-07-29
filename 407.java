static int minJumps(int[] arr){
        int steps=arr[0],maxReach=arr[0],leaps=1,n=arr.length;
        if(arr[0]==0){
            return -1;
        }
        for(int i=1;i<n;i++){
            if(i==n-1){
                return leaps;
            }
            maxReach=Math.max(i+arr[i],maxReach);
            steps--;
            if(steps==0){
                leaps++;
                
                if(i>=maxReach){
                    return -1;
                }
                steps=maxReach-i;
            }
            
        }
        return -1;
    }