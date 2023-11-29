//* 234960256	Nov/29/2023 23:57UTC+7	Minh4893IT	A - New Year and Hurry	GNU C++14	Accepted	15 ms	0 KB

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

    int result = 0;
    int time = 0;
    k = 240 - k;
    while ((time += 5) <= k)
        ++result, k -= time;
    cout << min(n, result);
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
