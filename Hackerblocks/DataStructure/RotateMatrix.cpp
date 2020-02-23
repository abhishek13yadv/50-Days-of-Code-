#include<bits/stdc++.h>
using namespace std;
void rotate(int a[][1000],int n)
{
	/*for(int row = 0;row<n;row++)
	{
		int start_col = 0;
		int end_col = n-1;
		while(start_col<end_col)
		{
			swap(a[row][start_col],a[row][end_col]);
			start_col++;
			end_col--;
		}
	}
	*/
	for(int i=0;i<n;i++)
	{
		reverse(a[i],a[i]+n);
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<j)
			{
				swap(a[i][j],a[j][i]);
			}
		}
	}
}

// Function to print the matrix 
void displayMatrix(int a[][1000],int n) 
{ 
    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < n; j++) 
            printf("%2d ", a[i][j]); 
  
        printf("\n"); 
    } 
    printf("\n"); 
} 
int main()
{
	int n;
	cin>>n;
	int a[1000][1000];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	rotate(a,n);
	displayMatrix(a,n);
	return 0;
}
