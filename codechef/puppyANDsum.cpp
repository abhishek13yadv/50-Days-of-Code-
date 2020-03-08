#include <iostream>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int d,n,i,j,sum=0;
			cin>>d>>n;
			for(i=1;i<=d;i++)
				{	
					sum=0;
					for(j=1;j<=n;j++)
					{
						sum+=j;
					}
					n=sum;
				}
				cout<<sum<<endl;
	}
	return 0;
}
