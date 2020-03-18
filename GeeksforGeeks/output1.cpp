#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k=0;
	for(i=1;i<=3;i++)
	{
		for(j=i;j<=4;j++)
		{
			k = i+j +k;
			cout<<i<<" "<<j<<" "<<k<<" ";
		}
		cout<<endl;
	}
	cout<<i<<" "<<j<<" "<<k;
	return 0;
}
