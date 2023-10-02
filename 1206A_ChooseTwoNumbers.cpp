//* 226307681	Oct/02/2023 21:10UTC+7	Minh4893IT	A - Choose Two Numbers	GNU C++14	Accepted	15 ms	0 KB

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
    cin >> n;

    int max1 = 0;
    while (n--)
    {
        int val;
        cin >> val;
        max1 = max(max1, val);
    }

    cin >> m;
    int max2 = 0;
    ;
    while (m--)
    {
        int val;
        cin >> val;
        max2 = max(max2, val);
    }

    cout << max1 << ' ' << max2;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
