#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin >>s;
		int flag=0;
		int n = s.size();
		for(int i=0;i<n;i++)
		{
			if(s[i]!=s[n-i-1])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
