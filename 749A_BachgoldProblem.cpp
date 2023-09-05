//* 221960398	Sep/05/2023 22:52UTC+7	Minh4893IT	A - Bachgold Problem	GNU C++14	Accepted	31 ms	0 KB

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

    cout << n / 2 << endl;

    cout << 2 + n % 2 << ' ';
    for (int i = 1; i < n / 2; ++i)
        cout << 2 << ' ';
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
