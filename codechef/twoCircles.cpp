#include<bits/stdc++.h>
using namespace std;
void circle(int x1,int y1,int r1,int x2,int y2,int r2)
{
	int dist = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	if(dist+r2 < r1)
		cout<<"I"<<endl;
	else if(dist+r2 == r1)
		cout<<"E"<<endl;
	else
		cout<<"O"<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x1,y1,r1,x2,y2,r2;
	cin>>x1>>y1>>r1>>x2>>y2>>r2;
	circle(x1,y1,r1,x2,y2,r2);
	}
	
	return 0;
}
