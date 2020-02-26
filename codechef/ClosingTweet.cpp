//The problem essentially is to maintain binary (open(1) or close(0)) state of N tweets and 
//simulate K actions on them. The two types of 
//actions are (a) CLICK X , which toggles the state of
// Xth tweet and (b) CLOSEALL , which sets the state 
//of all the N tweets to close(0). After each of the K actions given, we need 
//to find the total number tweets in open(1) state.



#include<bits/stdc++.h>
using namespace std;
int count(int arr[],int n)
{
	int c =0;
	for(int i=1;i<=n;i++)
		if(arr[i]==1)
			c=c+1;
	return c;
}
int main()
{
	int n,k;
	cin>>n>>k;
	string s;
	int arr[n];
	int p;
	for(int i=0;i<=n;i++)
	{
		arr[i]=0;
	}
	while(k>0)
	{
		cin>>s;
		if(s=="CLOSEALL")
		{
			for(int i=0;i<=n;i++)
			{
				arr[i] =0;
			}
			cout<<count(arr,n)<<endl;
			k--;
		}
		else
		{
			cin>>p;
			if(arr[p]!=0)
				arr[p] =0;
			else
				arr[p] = 1;
			cout<<count(arr,n)<<endl;
			k--;
		}
	}
	return 0;
}
