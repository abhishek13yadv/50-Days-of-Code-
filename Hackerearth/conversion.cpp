#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t+1;k++)
	{
		string str1;
		//cin>>s;
		//int n = s.size();
		getline(cin,str1);
		transform(str1.begin(),str1.end(),str1.begin(),::tolower);
		for(int i = 0; str1[i]; i++)
		{
			if(str1[i]==' ')
				cout<<"$";
			else
			cout<<(int)str1[i]%96;
		}
		cout<<endl;	
	}
}
