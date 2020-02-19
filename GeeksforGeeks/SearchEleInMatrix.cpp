//Given a matrix mat[] of size n x m, where every row and column 
//is sorted in increasing order, and a number x is given. 
//The task is to find whether element x is present in the matrix or not.

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    // code please
	    int n,m,flag=0;
	    cin>>n>>m;
	    int a[n][m];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    int ele;
	    cin>>ele;
	    int i=0, j=m-1;
        while(i<=n-1 && j>=0)
        {
            if(a[i][j] == ele)
            {
                flag = 1;
                break;
            }
            else if(ele<=a[i][j]) 
                j--;
            else i++;
        }
        if(flag)
            cout<<1<<endl;;
        else
          cout<<0<<endl;;
	}
	return 0;
}
