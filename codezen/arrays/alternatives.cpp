void rearrange(int *arr,int l)
{
//Write code here, make changes in the same array 
    int p =0,n=1,temp;
    int temparr[l];
    for(int i=0;i<l;i++)
    {
        if(arr[i]>0)
        {
            temparr[p] = arr[i];
            p = p+2;
        }
        else if(arr[i]<0)
        {
            temparr[n] = arr[i];
            n = n+2;
        }
    }
    for(int i=0;i<l;i++)
    {
        arr[i] = temparr[i];
    }
}
