//* 224894879	Sep/24/2023 21:50UTC+7	Minh4893IT	B - Chips on the Board	GNU C++14	Accepted	249 ms	4700 KB

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

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i)
    {
        sum1 += a[i] + b[0];
        sum2 += b[i] + a[0];
    }

    cout << min(sum1, sum2) << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
