//* 232650421	Nov/13/2023 22:24UTC+7	Minh4893IT	A - Boredom	GNU C++14	Accepted	78 ms	4900 KB

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

    map<int, int> count;

    array<int, 100005> dp;
    dp.fill(0);

    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;

        ++count[val];
    }

    dp[1] = count[1];
    for (int i = 2; i <= 100000; ++i)
        dp[i] = max(dp[i - 1], dp[i - 2] + count[i] * i);
    cout << dp[100000];
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
