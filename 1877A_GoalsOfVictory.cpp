//* 234293131	Nov/25/2023 23:25UTC+7	Minh4893IT	A - Goals of Victory	GNU C++14	Accepted	15 ms	0 KB

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

    int sum = 0;
    while (--n)
    {
        int val;
        cin >> val;

        sum += val;
    }

    cout << -sum << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
