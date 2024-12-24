/*#include <bits/stdc++.h>
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
*/
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
        vector<int> v(n);
        vector<int> hash(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            hash[v[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (hash[i] > 0 && ((n - 2) % i == 0))
            {
                int com = (n - 2) / i;
                if (i == com)
                {
                    if (hash[com] > 1)
                    {
                        cout << i << ' ' << com << endl;
                        break;
                    }
                }
                else
                {
                    if (hash[com] > 0)
                    {
                        cout << i << ' ' << com << endl;
                        break;
                    }
                }
            }
        }
    }
}