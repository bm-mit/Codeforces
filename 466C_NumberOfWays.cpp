//* 215068096	Jul/22/2023 22:52UTC+7	Minh4893IT	C - Number of Ways	GNU C++14	Accepted	155 ms	3900 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define pq priority_queue
#define endl "\n"

#define LLMAX INT64_MAX
#define GET(var) getline(cin, var)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()

void solve()
{
    int n;
    cin >> n;

    vector<int> pref(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> pref[i], pref[i] += pref[i - 1];

    if (pref[n] % 3)
    {
        cout << 0;
        return;
    }

    int count = 0;
    int result = 0;
    for (int i = 1; i < n; ++i)
    {
        if (pref[i] == pref[n] / 3 * 2)
            result += count;
        count += pref[i] == pref[n] / 3;
    }
    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
