#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a[1000],i,j,c,k;
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		int max=0;
		for(j=0;j<n;j++)
		{
			c=0;
			for(k=j+1;k<n;k++)
			{
				if(a[j]==a[k])
				{
					c++;
				}
			}
			if(c>max)
			max=c;
		}
		cout<<n-max-1<<endl;
	}
}
