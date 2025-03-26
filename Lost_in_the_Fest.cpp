#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int ind=n-1;
        for(int i=0;i<n-1;i++){
            if(v[n-1]<=v[i]){
                ind = i;
                break;
            }
        }
        cout<<n-1-ind<<endl;
    }
}