#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    if(n%4)
      cout<<"No"<<endl;
    else if(n%100)
      cout<<"Yes"<<endl;
    else if(n%400)
      cout<<"No"<<endl;
    else
      cout<<"Yes"<<endl;
  }
  
  return 0;
}
