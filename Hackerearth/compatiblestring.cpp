
Two strings  and  comprising of lower case English letters are compatible if they are equal or can be made equal

abaca
cdbda

The string abaca can be converted to bcbda in one move and to cdbda in the next move.





#include<bits/stdc++.h>
using namespace std;

int main()
{
    //int t;
    //cin>>t;
    //while(t--)
    //{
        string s1,s2;
        int count=0;
        cin>>s1>>s2;
        if(s1.size()!=s2.size())
        {
            cout<<"NO"<<endl;
            return 0;
        }
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]>s2[i])
            {
                count=1;
            }
            
            
        }
        if(count==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    //}
    return 0;
}
