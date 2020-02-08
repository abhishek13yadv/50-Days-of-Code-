#include<bits/stdc++.h>
using namespace std;

bool IsogramString(string s)
{
    string a="";
    
    for(int i=0;i<s.length();i++)
    {
        if(a.find(s[i]) == string::npos)
	        a.push_back(s[i]);
	   else
	        return false;
    }
    return true;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    // code please
	   
	   string s;
	   cin>>s;
	   cout<<IsogramString(s)<<endl;
	        
	}
	 
	return 0;
}
