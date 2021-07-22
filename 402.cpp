bool compare(val a, val b){
    return a.first<b.first;
}

int maxChainLen(struct val p[],int n)
{
    vector<int>A(n,1);
    sort(p,p+n,compare);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(p[j].second<p[i].first && A[i]<A[j]+1){
                A[i]=A[j]+1;
            }
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    return max;
    
}