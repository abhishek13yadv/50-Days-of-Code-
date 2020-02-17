#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		for(int i=0;i<s.size()/2;i+=2)
		{
			cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}
