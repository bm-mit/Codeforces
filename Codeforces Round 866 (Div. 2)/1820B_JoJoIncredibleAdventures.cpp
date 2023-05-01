#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int count = 0;
    while (s[0] == '1' && count++ < s.length())
        s = s.substr(1, s.length() - 1) + s[0];

    s += '0';

    int curr = 0;
    int ma = 0;
    for (auto c : s)
    {
        if (c == '0')
        {
            ma = max(ma, curr);
            curr = 0;
        }
        else
            ++curr;
    }

    if (ma == s.length() - 1)
    {
        cout << ma * ma << "\n";
        return;
    }

    if (ma == 0)
    {
        cout << "0\n";
        return;
    }

    if (ma == 1)
    {
        cout << "1\n";
        return;
    }

    if (ma == 2)
    {
        cout << "2\n";
        return;
    }

    if (ma == 3)
    {
        cout << "4\n";
        return;
    }

    if (ma & 1)
    {
        cout << (ma / 2 + 1) * (ma / 2 + 1) << "\n";
        return;
    }

    cout << 3 * (ma - 2) << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}