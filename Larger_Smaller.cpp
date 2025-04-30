#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int mx=0,mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(mx<v[i])mx=v[i];
            if(mn>v[i])mn=v[i];
        }
        if(mx==mn)cout<<0<<endl;
        else
          cout<<(mx-(mn+1))<<endl;

    }
}