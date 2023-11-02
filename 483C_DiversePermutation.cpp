//* 231012355	Nov/02/2023 23:57UTC+7	Minh4893IT	C - Diverse Permutation	GNU C++14	Accepted	31 ms	0 KB

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
    int n, k;
    cin >> n >> k;

    int m = n - (n - k - 1);
    int start = 1;
    int stop = m;
    for (int i = 0; i < m / 2; ++i)
        cout << start++ << ' ' << stop-- << ' ';
    if (m % 2)
        cout << stop << ' ';

    for (int i = m + 1; i <= n; ++i)
        cout << i << ' ';
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
