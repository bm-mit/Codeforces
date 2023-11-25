//* 234051320	Nov/24/2023 21:40UTC+7	Minh4893IT	A - Line Trip	GNU C++14	Accepted	31 ms	0 KB

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
    int n, x;
    cin >> n >> x;

    array<int, 55> arr;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int result = arr[0];
    for (int i = 1; i < n; ++i)
        result = max(result, arr[i] - arr[i - 1]);
    cout << max(result, 2 * (x - arr[n - 1])) << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
