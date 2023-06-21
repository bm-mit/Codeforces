//* 210530266	Jun/21/2023 16:57UTC+7	Minh4893IT	B - Vlad and Cafes	GNU C++17	Accepted	156 ms	8100 KB

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

    map<int, int> m;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        m[val] = i;
    }

    int mi = (*m.begin()).first;
    for (auto p : m)
    {
        if (p.second < m[mi])
            mi = p.first;
    }

    cout << mi;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
