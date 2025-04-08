#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string sa,sb;
        cin>>sa>>sb;
        string r="";
        for(int i=0;i<sa.size();i++){
            if(sa[i]==sb[i])r += "G";
            else r += "B";
        }
        cout<<r<<endl;
    }
}