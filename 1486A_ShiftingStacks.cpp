//* 219783512	Aug/21/2023 18:30UTC+7	Minh4893IT	A - Shifting Stacks	GNU C++14	Accepted	30 ms	100 KB

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

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 1; i < n; ++i)
        if ((arr[i] += arr[i - 1]) < i * (i + 1) / 2)
        {
            cout << "NO" << endl;
            return;
        }

    cout << "YES" << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
