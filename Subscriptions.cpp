#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        long long result =((n+5)/6)*x;
        cout<<result<<endl;
    }
}