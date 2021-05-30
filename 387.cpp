 int countFriendsPairings(int n) 
    { 
        long long int  a=1,b=1,c=1,temp=0;
        for(int i=2;i<=n;i++){
            temp=(i-1)*a%1000000007;
            c=(temp+b)%1000000007;
            a=b;
            b=c;
        }
        return (c%1000000007);
    }