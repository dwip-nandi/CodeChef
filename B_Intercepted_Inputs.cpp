#include <bits/stdc++.h>
using namespace std;
int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> cnt(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]] ++;
        }
        for (int x = 1; x <= n; x++) {
            if (cnt[x] > 0 && (n - 2) % x == 0) {
                if (cnt[(n - 2) / x] > 0) {
                    cout << x << " " << (n - 2) / x << endl;
                    break;
                }              
            }
        }
    }
    return 0;
}
