//* 228465690	Oct/17/2023 02:28UTC+7	Minh4893IT	A - Nezzar and Colorful Balls	GNU C++14	Accepted	15 ms	0 KB

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

    int last;
    cin >> last;
    int res = 1;
    int curr = 1;
    for (int i = 1; i < n; ++i)
    {
        int val;
        cin >> val;
        if (val == last)
            ++curr;
        else
        {
            last = val;
            res = max(res, curr);
            curr = 1;
        }
    }

    cout << max(res, curr) << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
