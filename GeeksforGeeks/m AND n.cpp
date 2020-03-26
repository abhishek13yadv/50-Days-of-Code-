#include<bits/stdc++.h>
using namespace std;
long long int countDigit(long long int n) 
{ 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    // code please
	    long long int m,n;
	    cin>>m>>n;
	    if(countDigit(m+n) == countDigit(n))
	        cout<< n<<endl;
	    else
	        cout<< (m+n)<<endl;
	}
	return 0;
}
