#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end());
	    bool isPossible=true;
	    for(int i=1;i<n;i++){
	       if((v[i]-v[i-1])>1){
	         isPossible=false;
	         break;
	       } 
	    }
	    
	    if(isPossible)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}
