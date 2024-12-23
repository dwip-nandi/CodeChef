#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, k;
    cin >> n >> k;
    set<ll> s;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            s.insert(i);
            s.insert(n / i);
        }
    }
    if (k > s.size()) {
        cout << "-1" << endl;
    } else {
        auto it = s.begin();
        advance(it, k - 1);
        cout << *it << endl;
    }

    return 0;
}
