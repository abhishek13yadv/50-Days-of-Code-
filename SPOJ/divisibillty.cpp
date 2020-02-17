#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,n;
		cin>>n>>x>>y;
		for(int i=x;i<=n;i+=x)
		{
			if(i%y == 0)
			{
				continue;
			}
			else{
				cout<<i<<" ";
			}
		}
		cout<<endl;
		
	}
	return 0;
}
