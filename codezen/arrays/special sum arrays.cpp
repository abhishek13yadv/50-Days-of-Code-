int sum(int *arr,int size)
{
//Write code here
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum = sum+arr[i];
    }
    l1:
    int temp = 0;
    while(sum>0)
    {
        temp = temp+sum%10;
        sum = sum/10;
    }
    if(temp>10)
    {
        sum = sum+temp;
        goto l1;
    }
    return temp;
}
