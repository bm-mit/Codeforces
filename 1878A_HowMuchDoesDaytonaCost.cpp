//* 225279914	Sep/26/2023 21:38UTC+7	Minh4893IT	A - How Much Does Daytona Cost?	GNU C++14	Accepted	31 ms	1000 KB

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
    int n, k;
    cin >> n >> k;

    array<int, 100> arr;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n; ++i)
        if (arr[i] == k)
        {
            cout << "YES" << endl;
            return;
        }

    cout << "NO" << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
