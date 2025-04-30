#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        int onz=0;bool isPosssible=true;
        for(int i=0;i<n;i++){
            if(s[i]=='0' && t[i]=='1'){
                isPosssible=false;
            }
            if(s[i]=='1' && t[i]=='0')onz++;
        }
        if(isPosssible){
            if(onz%2==0){
               cout<<"YES"<<endl;
            }else cout<<"NO"<<endl;
        }else cout<<"NO"<<endl;
    }
}