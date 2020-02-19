//Given two arrays A and B of positive integers.
//Your task is to find numbers which are present in the first array, but not present in the second array




#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int r= 0;r<t;r++)
	{
	    long int n,m;
	    cin>>n>>m;
	    long long  *ar1 = new long long[n];
	    long long *ar2 = new long long[m];
	    for(long int i = 0;i<n;i++)
	    {
	        cin>>ar1[i];
	    }
	    for(long int i = 0;i<m;i++)
	    {
	        cin>>ar2[i];
	    }
	    unordered_set<long long> s;
	    for(long int i = 0;i<m;i++)
	    {
	        s.insert(ar2[i]);
	    }
	    for(long int i = 0;i<n;i++)
	    {
	        if(s.find(ar1[i]) == s.end())
	        {
	            cout<<ar1[i]<<" ";
	        }
	    }
	    cout<<endl;
	    
	  
	}
	return 0;
}
