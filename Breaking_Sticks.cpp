#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum += (v[i]-1);
        }
        cout<<sum<<endl;
    }

}