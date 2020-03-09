#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		string k = s;
		reverse(k.begin(),k.end());
		if(s==k)
			cout<<"AND IT IS"<<endl;
		else
			cout<<"DO NOT"<<endl;
	}
	return 0;
}
