//* 263594602	Jun/01/2024 14:52UTC+7	Minh4893IT	A - Little Nikita	C++17 (GCC 7-32)	Accepted	46 ms	0 KB

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
    int n, m;
    cin >>n >> m;

    cout << IF(n >= m && n % 2 == m % 2, "YES", "NO") << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
