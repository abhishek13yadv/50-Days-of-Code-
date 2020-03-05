#include<bits/stdc++.h>
using namespace std;
double mean(double arr[],int n)
{
	double sum = 0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	return sum/n;
}
double median(double arr[],int n)
{
	sort(arr,arr+n);
	if(n%2 == 0)
	{
		return (arr[n/2-1] + arr[n/2])/2;
	}
	return arr[n/2];
}

double mode(double arr[],int n)
{
	sort(arr,arr+n);
	int max_count = 1,res = arr[0],count = 1;
	for(int i=1;i<n;i++)
	{
		if(arr[i] == arr[i-1])
		{
			count++;
		}
		else
		{
			if(count>max_count)
			{
				max_count = count;
				res = arr[i-1];
			}
			count = 1;
		}
	}
	if(count>max_count)
	{
		max_count = count;
		res = arr[n-1];
	}
	return res;
}
int main()
{
	int n;
	double arr[1000];
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	cout<<"Enter the elements in array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl<<"Mean: "<<mean(arr,n);
	cout<<endl<<"Median: "<<median(arr,n);
	cout<<endl<<"Mode: "<<mode(arr,n);
	return 0;
}
