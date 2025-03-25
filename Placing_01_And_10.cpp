#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int mn=min(x,y);
	    int mx=max(x,y);
	    if(mx==mn)cout<<(mn*2)<<endl;
	    else
	      cout<<(mn*2)+(mx-mn)*2-1<<endl;
	}

}
