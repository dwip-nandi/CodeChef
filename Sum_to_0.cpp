#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        if (n == 1)
            cout << -1 << endl;
        else if(n%2==0){
            for(int i=1;i<=(n/2);i++){
                cout<<1<<' ';
            }
            for(int i=1;i<=(n/2);i++){
                cout<<-1<<' ';
            }cout<<endl;
        }
        else if(n%2==1){
            for(int i=1;i<=(n/2);i++){
                cout<<1<<' ';
            }cout<<1<<' ';
            for(int i=1;i<(n/2);i++){
                cout<<-1<<' ';
            }cout<<-2<<endl;
        }
    }
}