//count number of squares

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    // code please
	    long long int sum=0,a,n,b;
	    cin>>a>>b;
	    while(a>0 && b>0)
	    {
	        sum = sum+a*b;
	        a--;
	        b--;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
