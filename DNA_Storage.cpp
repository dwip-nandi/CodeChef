#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string r = "";
        for (int i = 0; i < n; i += 2) {  
            if (s[i] == '0' && s[i + 1] == '0') r += 'A';
            if (s[i] == '0' && s[i + 1] == '1') r += 'T';
            if (s[i] == '1' && s[i + 1] == '0') r += 'C';
            if (s[i] == '1' && s[i + 1] == '1') r += 'G';
        }

        cout << r << endl;
    }
}
