#include<bits/stdc++.h>
using namespace std;
void findroots(int a,int b,int c)
{
	if(a<=0){
		cout<<"Invalid";
		return;
	}
	int d = b*b - 4*a*c;
	double sqrt_val = sqrt(abs(d));
	double x = (-b - sqrt_val)/(2*a);
	double y = (-b + sqrt_val)/(2*a);
	if(d>0)
	{
		cout<<"Real and Distinct "<<endl<<min(x,y)<<" "<<max(x,y);
	}
	else if(d==0)
	{
		cout << "Real and Equal \n";
		cout << -(double)b / (2*a)<<" "<<-(double)b / (2*a);
	}
	else if(d<0)
	{
		cout<<"Imaginary"<<endl;
	}
}
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	findroots(a,b,c);
	return 0;
}
