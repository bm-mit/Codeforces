//* 220505030	Aug/26/2023 18:57UTC+7	Minh4893IT	B - Array Decrements	GNU C++14	Accepted	124 ms	800 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    int diff = INT_MAX;
    for (int i = 0; i < n; ++i)
        if (b[i])
            diff = a[i] - b[i];

    if (diff < 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (diff == INT_MAX)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < n; ++i)
        if ((b[i] == 0 && a[i] > diff) || (b[i] != 0 && a[i] - b[i] != diff))
        {
            cout << "NO" << endl;
            return;
        }

    cout << "YES" << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
