#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int m)
{
	int i;
	for(i=0;i<n;i++)
		if(arr[i] == m)
			return i;
	return -1;
}
int main() {
	int n,m;
	int arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>m;
	cout<<search(arr,n,m);
	

	return 0;
}
