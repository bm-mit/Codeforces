//* 237284229	Dec/15/2023 06:55UTC+7	Minh4893IT	C - Thermostat	GNU C++14	Accepted	15 ms	0 KB

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
    int l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;

    if (a == b)
        return void(cout << 0 << endl);
    if (abs(a - b) >= x)
        return void(cout << 1 << endl);
    if (r - max(a, b) >= x || min(a, b) - l >= x)
        return void(cout << 2 << endl);
    if ((r - b >= x && a - l >= x) || (r - a >= x && b - l >= x))
        return void(cout << 3 << endl);

    cout << -1 << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
