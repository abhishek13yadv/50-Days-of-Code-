/*
      10 => 20 => 30 => 40 
                        ||
      50 <= 60 <= 70 <= 80
      ||
      23 => 45 => 12 => 90






#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    // code please
	    int i,j;
	    int n;
	    cin>>n;
	    int arr[n][n];
	    for( i=0;i<n;i++)
	    {
	        for( j=0;j<n;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    for( i=0;i<n;i++)
	    {
	        if(i%2 == 0)
	        {
	            for(j=0;j<n;j++){
	                cout<<arr[i][j]<<" ";
	            }
	        }
	        else
	        {
	            for(j=n-1;j>=0;j--){
	                cout<<arr[i][j]<<" ";
	            }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
