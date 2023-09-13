//* 223250753	Sep/13/2023 23:54UTC+7	Minh4893IT	A - Chips Moving	GNU C++14	Accepted	15 ms	0 KB

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

    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;

        count += val % 2;
    }

    cout << min(count, n - count);
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
