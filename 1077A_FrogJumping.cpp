//* 221648040	Sep/03/2023 14:48UTC+7	Minh4893IT	A - Frog Jumping	GNU C++14	Accepted	15 ms	0 KB

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
    int a, b, k;
    cin >> a >> b >> k;

    cout << (a - b) * (k / 2) + a * (k % 2) << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
