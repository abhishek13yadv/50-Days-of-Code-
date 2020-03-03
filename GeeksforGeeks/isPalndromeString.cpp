#include<bits/stdc++.h>
using namespace std;
void isPalindrome(char str[])
{
	int l=0;
	int h=strlen(str)-1;
	while(h>l)
	{
		if(str[l++]!=str[h--])
		{
			cout<<str<<"is not a palindrome";
			return;
		}
	}
	cout<<str<<"is palindrome";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char str[20];
		cin>>str;
		isPalindrome(str);
	}
	return 0;
}
