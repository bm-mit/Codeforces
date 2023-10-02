//* 226302371	Oct/02/2023 20:30UTC+7	Minh4893IT	A - Dungeon	GNU C++14	Accepted	31 ms	0 KB

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
    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;
    cout << IF(sum % 9 == 0 && min({a, b, c}) >= sum / 9, "YES", "NO") << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
