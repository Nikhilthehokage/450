void solve(string& S, vector<bool>&visited,int k,vector<string>& result,string current){
	        if(k==0){
	            result.emplace_back(current);
	            return;
	        }
	        int n=S.length();
	        for(int i=0;i<n;i++){
	            if(visited[i]==false){
	                visited[i]=true;
	                current.push_back(S[i]);
	                solve(S,visited,k-1,result,current);
	                 visited[i]=false;
	                current.pop_back();
	                
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		   vector<bool>visited(S.length(),false);
		   vector<string>result;
		   string current;
		   solve(S,visited,S.length(),result,current);
		   sort(result.begin(),result.end());
		   return result;
		}