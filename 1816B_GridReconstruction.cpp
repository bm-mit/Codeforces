//* 208025271	Jun/01/2023 13:45UTC+7	Minh4893IT	B - Grid Reconstruction	GNU C++17	Accepted	46 ms	0 KB

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

    cout << 2 * n - 1 << ' ';
    for (int i = 2; i <= n; ++i)
    {
        if (i % 2)
            cout << n + i - 1 << ' ';
        else
            cout << i << ' ';
    }
    cout << endl;

    for (int i = 1; i < n; ++i)
    {
        if (i % 2)
            cout << i << ' ';
        else
            cout << n + i - 1 << ' ';
    }
    cout << 2 * n << endl;
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
