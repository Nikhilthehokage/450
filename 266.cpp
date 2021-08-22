class Solution
{
    public:
    //Function to find the largest number after k swaps.
   
    
    void solve(string str, int k, string& max,int curr)
{
    
    if (k == 0)
        return;
 
    int n = str.length();
    char maximum=str[curr];
    for(int i=curr;i<n;i++){
        if(str[i]>maximum){
            maximum=str[i];
        }
    }
    if(maximum!=str[curr]){
        k--;
    }
 
        // Compare it with all digits after it
        for (int j = curr; j < n; j++) {
           
            if (str[j] == maximum) {
               
                swap(str[curr], str[j]);
 
                if (str.compare(max) > 0)
                    max = str;
 
                
                solve(str, k , max,curr+1);
 
                
                swap(str[curr], str[j]);
            }
        }
    
}
    string findMaximumNum(string str, int k)
    {
        string max;
        max=str;
        
        solve(str,k,max,0);
        
        return max;
    }
};