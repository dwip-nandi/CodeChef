#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, m;
    cin >> n >> m;
    vector<int> va(n);
    vector<int> vb(m);
    for (int i = 0; i < n; i++)
        cin >> va[i];
    for (int i = 0; i < m; i++)
        cin >> vb[i];

    sort(va.begin(),va.end());

    for (int i = 0; i < m; i++)
    {
        int count = upper_bound(va.begin(),va.end(),vb[i])-va.begin();
        cout << count << ' ';
    }
    cout << endl;
}