//* 220039117	Aug/23/2023 20:56UTC+7	Minh4893IT	A - Dalton the Teacher	GNU C++14	Accepted	46 ms	0 KB

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

    int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        int val;
        cin >> val;
        count += val == i;
    }

    cout << (count + 1) / 2 << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
