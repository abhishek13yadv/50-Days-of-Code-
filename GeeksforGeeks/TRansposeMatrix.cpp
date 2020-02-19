#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    // code please
	    int i,j;
	    int n;
	    cin>>n;
	    int mat[n][n];
	    for(i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>mat[i][j];
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cout<<mat[j][i]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
