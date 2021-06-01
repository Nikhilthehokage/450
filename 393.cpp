int DP[501][501];
	   
		int LongestRepeatingSubsequence(string str){
		     string s1=str,s2=str;
		    int x,y;
		    x=y=str.length();
		    for(int i=0;i<=x;i++){
                DP[i][0]=0;
		    }
		    for(int i=0;i<=x;i++){
                DP[0][i]=0;
		    }
		    for(int i=1;i<=x;i++){
		        for(int j=1;j<=x;j++){
		            if(s1[i-1]==s2[j-1] && i!=j){
		                DP[i][j]=1+DP[i-1][j-1];
		            }
		            else{
		                DP[i][j]=max(DP[i-1][j],DP[i][j-1]);
		            }
		        }
		    }
		  return DP[x][y];
		}
