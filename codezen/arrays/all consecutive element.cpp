void shell_sort(int a[] , int n)
{
	int right ;
	for(int gap = n/2 ; gap >0 ; gap=gap/2 )
	{
		for(int i = gap ; i < n ; i ++)
		{
			int var = a[i];
			for(right = i ; right>=gap;)
			{
				if(a[right-gap]>var)
				{
					a[right]= a[right-gap];
					right = right-gap ;	
				}
				else
                    break ;
			}
			a[right]= var ;
		}
	}
	
}

bool containsConsecutiveNumbers(int input[], int len){
	// Write your code here
	shell_sort(input,len);
    for(int i=0;i<len-1;i++)
    {
        if(input[i+1]-input[i] !=1)
            return false;
    }
    return true;
}
