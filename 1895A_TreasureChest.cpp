//* 231833364	Nov/08/2023 00:49UTC+7	Minh4893IT	A - Treasure Chest	GNU C++14	Accepted	0 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    if (y <= x)
    {
        cout << x << endl;
        return;
    }

    x = min(x + k, y);

    cout << y + abs(x - y) << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
