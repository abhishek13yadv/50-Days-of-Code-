#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  long int n;
  cin>>n;
  long int rev=0,rem;
  while(n!=0)
  {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
  }
  cout<<rev;
  return 0;
}
