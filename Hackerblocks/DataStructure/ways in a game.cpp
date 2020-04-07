// Consider a game where a player can score 3 or 5 or 10 points in a move. 
//Given a total score n, find number of ways to reach the given score



#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
	int arr[n+1],i;
	for(int j=0;j<n+1;j++)
		arr[j] = 0;
	arr[0] =1;
	for(i=3;i<=n;i++)
		arr[i]+= arr[i-3];
	for( i=5;i<=n;i++)
		arr[i]+= arr[i-5];
	for( i=10;i<=n;i++)
		arr[i]+= arr[i-10];

	return arr[n];
}
int main() {
	int n;
	cin>>n;
	cout<<solve(n);
	return 0;
}
