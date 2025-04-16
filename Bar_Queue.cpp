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
        if (s[0] == 'B')
        {
            cout << 1 << endl;
            continue;
        }
        else
        {
            bool issi=true;
            int b = 0, g = 0, c = 0;
            for (int i = 0; i < n; i++)
            {
                c++;
                if (s[i] == 'G')
                    g++;
                else
                    b++;

                if (b > 2*g)
                {
                    //cout<<b<<' '<<g<<endl;
                    issi=false;
                    break;
                }
            }
            if(issi)cout<<n<<endl;
            else cout<<c<<endl;
        }
    }
}