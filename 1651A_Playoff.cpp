//* 225532945	Sep/27/2023 21:56UTC+7	Minh4893IT	A - Playoff	GNU C++14	Accepted	0 ms	0 KB

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

    cout << (1 << n) - 1 << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
