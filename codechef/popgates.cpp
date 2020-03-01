#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        char arr[n];
        int flip=0;
        for(int i=0;i<n;i++)
        {
        	cin>>arr[i];
		}
		for(int i=n-1;i>=n-k;i--)
		{
			if(arr[i] == 'H' && flip%2 ==0 || arr[i] =='T' && flip%2!=0){
				flip++;
				
			}
		}
		int count=0;
		int c=0;
		for(int i=0;i<n-k;i++)
		{
			if(arr[i] == 'H')
				count++;
			else
				c++;
				
		}
		if(flip%2 == 0)
		{
			cout<<count<<endl;
		}
		else
		{
			cout<<c<<endl;
		}
    }
    return 0;
}
