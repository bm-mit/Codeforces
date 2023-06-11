//* 209287286	Jun/11/2023 20:25UTC+7	Minh4893IT	B - Lost Permutation	GNU C++17	Accepted	15 ms	100 KB

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
    int n, s;
    cin >> n >> s;

    map<int, bool> appear;
    int ma = 0;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        appear[val] = true;
        ma = max(ma, val);
    }

    int i = 1;
    while (s > 0)
    {
        if (!appear[i])
            s -= i;
        ma = max(ma, i);
        ++i;
    }

    cout << IF(!s && ma == appear.size(), "YES", "NO") << endl;
}

signed main()
{
    FAST_IO;

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
