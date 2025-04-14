#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double c=0;
    for(int i=1;i<=n;i++){
        c += (double)1/i;
    }
    cout<<fixed<<setprecision(12)<<c<<endl;
}