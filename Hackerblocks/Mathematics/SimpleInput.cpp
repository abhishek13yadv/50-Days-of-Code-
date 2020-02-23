//  Print all the numbers before the cumulative sum become negative.


#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,sum=0;
	while(sum>=0)
	{
		cin>>t;
		sum=sum+t;
		if(sum<0)
		{
			break;
		}
		cout<<t<<endl;
	}
	return 0;
}
