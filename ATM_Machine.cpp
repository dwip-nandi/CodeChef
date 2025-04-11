#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<=k){
                cout<<1;
                k -=v[i];
            }else cout<<0;
        }
        cout<<endl;
    }
}