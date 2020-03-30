#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
void checkPairs(int arr[],int n,int key)
{
	int i,temp;
	int hash[MAX] ={0};
	for(i=0;i<n;i++)
	{
		temp = key-arr[i];
		if(temp>=0 && hash[temp] == 1)
			cout<<"Elements are here";
		hash[arr[i]] =1;
	}
}
int main()
{
	int n,key;
	cin>>n>>key;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	checkPairs(arr,n,key);
	return 0;
}
