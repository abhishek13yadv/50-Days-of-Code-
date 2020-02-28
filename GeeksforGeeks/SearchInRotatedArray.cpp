#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int x;
	   // map<int,int> m;
	    int m[n];
	    vector<int> arr(1000000);
	    for(int i=0;i<n;i++){
	        cin>>x;
	        arr[x] = i;
	        m[i] = x;
	    }
	    int search;
	    cin>>search;
	    if(arr[search] == 0 && m[0]!=search)
	        arr[search] = -1;
	        cout<<arr[search]<<endl;
	}
	return 0;
}
