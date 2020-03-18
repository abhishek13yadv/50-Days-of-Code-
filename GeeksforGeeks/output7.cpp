#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0,j=1;
	for(++i;++i;++i,j++)
		if(i==4)
			break;
	cout<<i<<" "<<j;
	return 0;
}
