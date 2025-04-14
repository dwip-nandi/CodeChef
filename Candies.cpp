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
        vector<int> v(2 * n);
        map<int, int> mp;
        for (int i = 0; i < (2 * n); i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        bool isPossible = true;
        for (auto u : mp)
            if (u.second >= 3)
            {
                isPossible = false;
                break;
            }

        if (isPossible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}