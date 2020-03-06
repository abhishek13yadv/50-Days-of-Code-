#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>>t; 
    while(t--){
	    int n,a[12]={0},x,y;
	    cin>>n;
	    for(int i=0;i<n;i++) {
	        cin >> x >> y;
	        a[x]=max(a[x],y);
	    }
	    int ans=0;
	    for(int i=1;i<=8;i++){
	        ans+=a[i];
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
