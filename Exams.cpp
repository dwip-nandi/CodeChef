#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,z;
        cin>>n>>x>>z;
        if(((n*x)/2)<z)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}