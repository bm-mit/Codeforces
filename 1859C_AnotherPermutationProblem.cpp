//* 218569962	Aug/12/2023 23:19UTC+7	Minh4893IT	C - Another Permutation Problem	GNU C++14	Accepted	15 ms	0 KB

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
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int result = 0;
        int ma = 0;
        for (int j = 1; j <= i - 1; j++)
        {
            result += j * j;
            ma = max(ma, j * j);
        }

        for (int j = i, m = n; j <= n; j++)
        {
            result += j * m;
            ma = max(ma, j * m--);
        }

        ans = max(ans, result - ma);
    }

    cout << ans << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}