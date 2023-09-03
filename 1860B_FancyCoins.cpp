//* 221647111	Sep/03/2023 14:38UTC+7	Minh4893IT	B - Fancy Coins	GNU C++14	Accepted	46 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

// #define int long long
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
    int m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;

    // x(1) + yk = m
    int x = m % k;
    int y = m / k;

    int fancy_a1 = max(0, x - a1);
    int fancy_ak = max(0, y - ak);

    // how many a1 can replace to ak
    int can_repl = max(0, a1 - x);
    int replaced_ak = min(can_repl / k, fancy_ak);

    // result
    cout << fancy_a1 + fancy_ak - replaced_ak << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
