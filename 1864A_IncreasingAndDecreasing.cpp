//* 220639030	Aug/27/2023 12:36UTC+7	Minh4893IT	A - Increasing and Decreasing	GNU C++14	Accepted	31 ms	100 KB

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
    int x, y, n;
    cin >> x >> y >> n;

    vector<int> result(n);
    result.front() = x, result.back() = y;

    for (int i = 1; i < n - 1; ++i)
        result[n - i - 1] = result[n - i] - i;

    if (result[1] - result[0] <= result[2] - result[1])
    {
        cout << -1 << endl;
        return;
    }

    for (auto elem : result)
        cout << elem << ' ';
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
