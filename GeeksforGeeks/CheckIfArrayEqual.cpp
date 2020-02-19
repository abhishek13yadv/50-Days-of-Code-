#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    // code please
	    int n;
	    cin>>n;
	    long long int arr1[n];
	    long long int arr2[n];
	    long long int sum1=0,sum2=0,res=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr1[i];
	        sum1+=arr1[i];
            res^=arr1[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr2[i];
	        sum2+=arr2[i];
	        res^=arr2[i];
	    }
	    if(res==0 && sum1 == sum2)
	        cout<<1<<endl;
	    else
	        cout<<0<<endl;
	}
	return 0;
}
