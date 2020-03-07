#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        /*int n;
        cin>>n;
        int t=n,s=0;
        int rev;
        while(n>0)
        {
        	rev = n%10;
			s = s*10+rev;
			n=n/10; 
		}
		if(s==t)
			cout<<"wins"<<endl;
		else
			cout<<"losses"<<endl;
			*/
			
		string s;
		cin>>s;
		int i=0,j=s.size()-1;
		bool flag = true;
		while(i<j)
		{
			if(s[i]!=s[j])
			{
				flag = false;
				break;
			}
			i++;
			j--;
		}
		flag ? cout<<"wins" : cout<<"losses";
		cout<<endl;
    }
    return 0;
}
