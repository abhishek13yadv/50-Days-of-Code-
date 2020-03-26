#include<bits/stdc++.h>
using namespace std;
int fun(int base)
{
    base = base - 2;
    base = base/2;
    return base*(base+1)/2;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    // code please
	    int base;
	    cin>>base;
	    cout<<fun(base)<<endl;
	}
	return 0;
}
