#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        if (k >= ((n + 1) / 2))
        {
            int x = 0;
            for (int i = 0; i < k; i++)
            {
                x += v[i];
            }
            int y = 0;
            for (int i = k; i < n; i++)
            {
                y += v[i];
            }
            cout << x - y << endl;
        }
        else
        {
            int x = 0;
            for (int i = 0; i < n - k; i++)
            {
                x += v[i];
            }
            int y = 0;
            for (int i = n - k; i < n; i++)
            {
                y += v[i];
            }
            cout << x - y << endl;
        }
    }
}