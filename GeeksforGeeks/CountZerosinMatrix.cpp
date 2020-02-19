//Given a N x N binary matrix A where each row and column of the matrix is sorted in ascending order , 
//Your task is to complete the function 
//countZero which returns the count of  number of 0s present in it.

int countZeroes(int A[MAX][MAX],int N)
{
//Your code here
/*
int i,j,k=0;
for( i=0;i<N;i++)
{
    for( j=0;j<N;j++)
    {
        k+=A[i][j]^1;
    }
}
return k;
*/
int i,j,sum=0;
for(i=0;i<N;i++)
{
    for(j=N-1;j>=0;j--)
    {
        if(A[i][j]!=1)
        {
            sum = sum+j+1;
            break;
        }
    }
}
return sum;
}
