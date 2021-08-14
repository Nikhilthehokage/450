void solve(int n,set<string>&S,string& s,int pos,string temp,vector<string>&list){
        
       if(pos==n){
           list.push_back(temp);
           return;
       }
       int lengthS= s.length(),lengthTemp=temp.length();
       
       for(int i=pos+1;i<=lengthS;i++ ){
           
           if(S.find(s.substr(pos,i-pos))!=S.end()){
               if(pos==0){
                   temp+=s.substr(pos,i-pos);
               }
               else{
                   temp+=" "+s.substr(pos,i-pos);
               }
               
               solve(n,S,s,i,temp,list);
               temp.erase(lengthTemp);
           }
       }
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
        set<string> S;
        for(int i=0;i<dict.size();i++){
            S.insert(dict[i]);
        }
        vector<string> result;
        string temp="";
        solve(s.length(),S,s,0,temp,result);
        return result;
    }