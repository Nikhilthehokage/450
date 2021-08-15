bool isValid(bool graph[101][101],int c,vector<int>&V,int v){
   
    
    for(int i=0;i<101;i++){
        if(graph[v][i]==true && V[i]==c ){
            return false;
        }
    }
    return true;
}

bool solve(bool graph[101][101],vector<int>V,int v,int n,int m){
    if(v==n){
        return true;
    }
    for(int i=1;i<=m;i++){
        if(isValid(graph,i,V,v)==true){
            V[v]=i;
            if(solve(graph,V,v+1,n,m)==true){
                return true;
            }
            V[v]=0;
        }
    }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int V)
{
    vector<int> colors(V);
    for(int i=0;i<V;i++){
        colors[i]=0;
    }
   
    return solve(graph,colors,0,V,m);
    //return 0;
}