#include<bits/stdc++.h>
using namespace std;
int towerOfHanoi(int n, int from, int via, int to)
{
    if (n == 0)
    return 0;

    int x = towerOfHanoi(n - 1, from, to, via);
    cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
    int y = towerOfHanoi(n - 1, via, from, to);
    return x + 1 + y;
}
int main()
{
	  int t;
	  cin>>t;
	  while(t--)
	  {
	     // code please
	     int n;
	     cin>>n;
	     cout << towerOfHanoi(n, 1, 2, 3) << endl;
	  }
	  return 0;
}
