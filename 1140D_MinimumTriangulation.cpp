//* 228029688	Oct/13/2023 20:27UTC+7	Minh4893IT	D - Minimum Triangulation	GNU C++14	Accepted	15 ms	0 KB

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
    int n;
    cin >> n;

    int res = 0;
    for (int i = 3; i <= n; ++i)
        res += i * (i - 1);
    cout << res << endl;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
