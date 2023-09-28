//* 225681999	Sep/28/2023 23:25UTC+7	Minh4893IT	C - Three Parts of the Array	GNU C++14	Accepted	77 ms	1600 KB

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

    array<int, 200000> pref;
    for (int i = 1; i <= n; ++i)
    {
        cin >> pref[i];
        pref[i] += pref[i - 1];
    }

    int result = 0;
    for (int i = 1; i < n; ++i)
        if (binary_search(pref.begin() + i, pref.begin() + n + 1, pref[n] - pref[i]))
            result = pref[i];

    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
