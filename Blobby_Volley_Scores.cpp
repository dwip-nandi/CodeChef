#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0;
        if(s[0]=='A')a++;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                if(s[i]=='A')a++;
                else b++;
            }
        }
        cout<<a<<' '<<b<<endl;
    }
}
