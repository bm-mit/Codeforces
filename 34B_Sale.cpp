//* 222604185	Sep/09/2023 20:50UTC+7	Minh4893IT	B - Sale	GNU C++14	Accepted	0 ms	0 KB

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
    cin >> n >> m;

    vector<int> arr;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        if (val < 0)
            arr.push_back(-val);
    }

    sort(arr.rbegin(), arr.rend());
    cout << accumulate(arr.begin(), arr.begin() + min((int)arr.size(), m), 0ll);
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
