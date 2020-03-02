#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define modu 1000000007
#define ull unsigned long long int
ll min(ll i,ll k)
{
    return i>k?k:i;
}
ull binco(int n,int k)
{
    int dp[k+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=min(i,k);j>0;j--)
        dp[j]=(dp[j]+dp[j-1])%modu;
    }
    return dp[k]%modu;
    
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    // code please
	    int  n,r;
	    cin>>n>>r;
	    
	    cout<<(binco(n,r))%modu<<endl;
	}
	return 0;
}
