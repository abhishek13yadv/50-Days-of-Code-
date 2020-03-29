#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int low,int high,int x);
bool isSubset(int arr1[],int arr2[],int m,int n)
{
	int i=0;
	sort(arr1,arr1+m);
	sort(arr2,arr2+n);N
	for(i=0;i<n;i++)
	{
		if(binarySearch(arr1,0,m-1,arr2[i]) == -1)
			return 0;
	}
	return 1;
}
int binarySearch(int arr[], int low, 
                    int high, int x) 
{ 
    if(high >= low) 
    { 
        int mid = (low + high)/2;
        if(( mid == 0 || x > arr[mid-1]) && (arr[mid] == x)) 
            return mid; 
        else if(x > arr[mid]) 
            return binarySearch(arr, (mid + 1), high, x); 
        else
            return binarySearch(arr, low, (mid -1), x); 
    } 
    return -1; 
}  
int main()
{
	int m,n;
	cin>>m>>n;
	int arr1[m];
	int arr2[n];
	for(int i=0;i<m;i++)
	{
		cin>>arr1[m];
	}
	for(int i=0;i<n;i++)
	{
		cin>>arr2[n];
	}
	if(isSubset(arr1, arr2, m, n)) 
        cout << "arr2[] is subset of arr1[] "; 
    else
        cout << "arr2[] is not a subset of arr1[] ";  
  
    return 0;
}
