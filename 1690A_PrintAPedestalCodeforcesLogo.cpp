//* 220501540	Aug/26/2023 18:27UTC+7	Minh4893IT	A - Print a Pedestal (Codeforces logo?)	GNU C++14	Accepted	31 ms	100 KB

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

    int mod = n % 3;
    vector<int> result = {n / 3, n / 3 + 1, n / 3 - 1};
    result[1] += mod >= 1;
    result[0] += mod == 2;

    cout << result[0] << ' ' << result[1] << ' ' << result[2] << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
