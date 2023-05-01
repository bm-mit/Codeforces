#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m, s;
    cin >> m >> s;

    while (m--)
    {
        int temp;
        cin >> temp;
        s += temp;
    }

    int delta = 1 + 8 * s;
    if (delta < 0)
    {
        cout << "NO\n";
        return;
    }

    int sq = sqrt(delta);
    if (delta == sq * sq)
    {
        int result = (sq - 1) / 2;

        if (result * (result + 1) / 2 == s)
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}