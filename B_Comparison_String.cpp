// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int ml=0,mr=0;
//         for(int i=0;i<n;i++){
//             int cl=0,cr=0;
//             while(s[i]=='>'){
//                 cr++;
//                 i++;
//             }
//             if(cr>mr)mr=cr;
//             while(s[i]=='<'){
//                 cl++;
//                 i++;
//             }
//             if(cl>ml)ml=cl;
//         }
//         cout<<max(mr,ml)+1<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cm = 1, ca = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            ca++;  
        } else {
            cm = max(cm, ca);  
            ca = 1;  
        }
    }

    cm = max(cm, ca);  
    cout << cm + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
