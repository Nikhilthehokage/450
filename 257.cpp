class Solution {
public:
    
    bool isValid(string s){
        stack<char> S;
        int i=0,length=s.length();
        while(i<length){
            if(s[i]=='('){
                S.push(s[i]);
            }
            if(s[i]==')'){
                if(S.empty()){
                    return false;
                }
                else{
                    S.pop();
                }
            }
            i++;    
        }
        if(S.empty()){
            return true;
        }
        else{
            return false;
        }
    }
    
    int getMin(string s){
        stack<char>S;
        int i=0,length=s.length();
        while(i<length){
            if(s[i]=='('){
                S.push(s[i]);
            }
            if(s[i]==')'){
                if(S.empty() || S.top()==')'){
                    S.push(s[i]);
                }
                else{
                    S.pop();
                }
            }
            i++;
        }
        return S.size();
    }
    
    void solve(vector<string>&S,string s,int n){
        if(n==0){
            if(isValid(s)){
                S.push_back(s);
            }
            return;
        }
        string left ,right;
        int length=s.length();
        for(int i=0;i<length;i++){
            if(s[i]!='(' && s[i]!=')'){
                continue;
            }
            left=s.substr(0,i);
            right=s.substr(i+1,length-1-i);
            
            if(Se.find(left+right)==Se.end()){
                Se.insert(left+right);
                solve(S,left+right,n-1);
            }
        }
    }
    set<string> Se;
    
    vector<string> removeInvalidParentheses(string s) {
        
        int n= getMin(s);
        vector<string> result;
        solve(result,s,n);
        
       
        return result;
        
        
    }
};