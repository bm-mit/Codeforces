//* 225302139	Sep/26/2023 21:50UTC+7	Minh4893IT	C - Vasilije in Cacak	GNU C++14	Accepted	31 ms	1000 KB

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

int sum(int n)
{
    return n * (n + 1) / 2;
}

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    cout << IF(sum(n) - sum(n - k) >= x && sum(k) <= x, "YES", "NO") << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
