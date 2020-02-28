#include<bits/stdc++.h>
using namespace std;

int kth(int arr1[], int arr2[], int m, int n, int k) 
{ 
	int sorted1[m + n]; 
	int i = 0, j = 0, d = 0; 
	while (i < m && j < n) 
	{ 
		if (arr1[i] < arr2[j]) 
			sorted1[d++] = arr1[i++]; 
		else
			sorted1[d++] = arr2[j++]; 
	} 
	while (i < m) 
		sorted1[d++] = arr1[i++]; 
	while (j < n) 
		sorted1[d++] = arr2[j++]; 
	return sorted1[k - 1]; 
} 



int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    // code please
	    int m,n,k;
	    cin>>m>>n>>k;
	    int arr1[m];
	    int arr2[n];
	    for(int i=0;i<m;i++)
	    {
	        cin>>arr1[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr2[i];
	    }
	    cout << kth(arr1, arr2, m, n, k)<<endl; 
	}
	return 0;
}
