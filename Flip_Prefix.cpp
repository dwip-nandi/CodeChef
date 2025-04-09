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
        string s;
        cin >> s;
        int c0 = 1, c1 = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[0] == '0')
            {
                if (s[i] == s[i - 1])
                {
                    c0++;
                }
                else
                {
                    //i++;
                    if (s[i] == s[i - 1])
                    {
                        c1++;
                        break;
                    }
                }
            }
            else
            {
                if (s[i] == s[i - 1])
                {
                    c1++;
                }
                else
                {
                    i++;
                    if (s[i] == s[i - 1])
                    {
                        c0++;
                        break;
                    }
                }
            }
        }
        cout<<c0<<' '<<c1<<endl;
        if (c0 == c1)
            cout << c0 + c1 << endl;
        else
            cout << 1 << endl;
    }
}