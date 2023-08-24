//* 220148245	Aug/24/2023 19:31UTC+7	Minh4893IT	A - Two distinct points	GNU C++14	Accepted	15 ms	0 KB

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
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l1 != r2)
        cout << l1 << ' ' << r2 << endl;
    else
        cout << l1 << ' ' << l2 << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
