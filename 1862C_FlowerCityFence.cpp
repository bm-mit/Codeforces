//* 220473626	Aug/26/2023 14:12UTC+7	Minh4893IT	C - Flower City Fence	GNU C++14	Accepted	77 ms	3100 KB

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

    vector<int> arr(n + 1), pref(n + 2);
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    if (arr[1] != n)
    {
        cout << "NO" << endl;
        return;
    }

    for (auto elem : arr)
        ++pref[1], --pref[elem + 1];
    for (int i = 1; i <= n; ++i)
        pref[i] += pref[i - 1];

    pref.pop_back();
    cout << IF(pref == arr, "YES", "NO") << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
