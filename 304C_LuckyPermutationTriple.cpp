//* 229008181	Oct/21/2023 12:16UTC+7	Minh4893IT	C - Lucky Permutation Triple	GNU C++14	Accepted	122 ms	0 KB

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

    if (n % 2 == 0)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n; ++i)
        cout << i << ' ';
    cout << endl;

    for (int i = 1; i <= n; ++i)
        cout << i % n << ' ';
    cout << endl;

    for (int i = 0; i < n; ++i)
        cout << (i + (i + 1) % n ) % n << ' ';
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
