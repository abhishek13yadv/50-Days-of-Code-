#include<bits/stdc++.h>
using namespace std;
bool isSubset(long int arr1[], long int arr2[], long int m,long  int n){
    long int i = 0; 
    long int j = 0; 
    for (i = 0; i < n; i++) 
    { 
        for (j = 0; j < m; j++) 
        { 
            if(arr2[i] == arr1[j]) 
                break; 
        } 
          
        /* If the above inner loop was 
        not broken at all then arr2[i] 
        is not present in arr1[] */
        if (j == m) 
            return false; 
    } 
      
    /* If we reach here then all 
    elements of arr2[] are present 
    in arr1[] */
    return true;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,m;
	    cin>>n>>m;
	    long int arr1[n],arr2[m];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr1[i];
	    }
	    for(int j=0;j<m;j++)
	    {
	        cin>>arr2[j];
	    }
	    if(isSubset(arr1,arr2,n,m))
	        cout<<"Yes"<<endl;
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
