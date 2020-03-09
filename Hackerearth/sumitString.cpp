//A string is called 'Sumit's String' , 
//if distance between adjacent character is 1.

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,diff,flag;
	cin>>t;
	while(t--)
	{
		char s[250];
		cin>>s;
		flag=1;
		for(int i=0;i<strlen(s)-1;i++)
		{
			diff = abs(s[i]-s[i+1]);
			if(diff>=13)
				diff = 26 - diff;
			if(diff!=1)
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)
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
