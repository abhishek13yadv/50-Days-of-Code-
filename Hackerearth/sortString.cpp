Given a string S, and two numbers N, M - 
arrange the characters of string in between the indexes N and M 
(both inclusive) in descending order. (Indexing starts from 0).



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<string> v;
        string s;
        int n,m;
        cin>>s>>n>>m;
        sort(s.begin()+n,s.begin()+n+m,greater<char>());
        cout<<s<<endl;
    }
    return 0;
}
