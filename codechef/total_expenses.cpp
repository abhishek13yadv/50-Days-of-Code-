#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	float q,p;
	cin>>q>>p;
	if(q>1000)
	cout<<fixed<<setprecision(6)<<q*p*0.9<<endl;
	else
	cout<<fixed<<setprecision(6)<<q*p<<endl;
	}
	return 0;
}
