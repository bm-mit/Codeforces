//* 234476742	Nov/26/2023 23:15UTC+7	Minh4893IT	A - Jagged Swaps	GNU C++14	Accepted	31 ms	0 KB

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

    array<int, 10> arr;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << IF(arr[0] - 1, "NO", "YES") << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
