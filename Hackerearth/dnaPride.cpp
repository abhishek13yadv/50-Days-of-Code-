#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		string s;
		int n;
		cin>>n;
		cin>>s;
		int flag=1;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G')
			{
				cout<<"Error RNA nucleobases found!"<<endl;
				flag=0;
				
			}
		}
		for(int i=0;i<s.size();i++)
		{
			if(flag==1)
			{
				if(s[i]=='A')
					cout<<'T';
				else if(s[i]=='T')
					cout<<'A';
				else if(s[i]=='G')
					cout<<'C';
				else if(s[i]=='C')
					cout<<'G';
			}
		}
		cout<<endl;
	}
	return 0;
}
