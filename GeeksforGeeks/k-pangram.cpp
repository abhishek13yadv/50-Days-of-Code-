#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void check(string &s,int n,int k)
{
    vector<bool> mark(26,false);
    int index;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            index=s[i]-'A';
        else if(s[i]>='a' && s[i]<='z')
            index=s[i]-'a';
        mark[index]=true;
    }
    int c=0;
    for(int i=0;i<=25;i++)
    {
        if(mark[i]==false)
            c++;
    }
    if(c<=k)
        cout<<1;
    else
        cout<<0;
}
int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       int k; 
       cin>>k;
       int n=s.length();
       if(n>=26)
        check(s,n,k);
       else cout<<0;
        cout<<"\n";
    }
    return 0;
}
