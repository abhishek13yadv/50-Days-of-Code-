#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		ll sum=0;
		for(ll i=0;i<=(n-1)/2;i++)
		{
			sum += abs(arr[i]-arr[n-i-1]);
		}
		cout<<sum<<endl;
		
	}
}
