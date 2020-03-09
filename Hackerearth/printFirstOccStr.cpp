#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int hash[26]={0};
		for(int i=0;i<str.size();i++)
		{
			hash[str[i]-'a']++;
			
		}
		for(int i=0;i<str.size();i++)
		{
			if(hash[str[i]-'a'])
			{
				cout<<str[i];
				hash[str[i]-'a']=0;
			}
		}
		cout<<endl;
	}
	return 0;
}
