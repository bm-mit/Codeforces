//* 208147369	Jun/02/2023 16:20UTC+7	Minh4893IT	B - Rule of League	GNU C++17	Accepted	342 ms	0 KB

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
    int n, x, y;
    cin >> n >> x >> y;

    if ((x == 0 && y == 0) || (x != 0 && y != 0))
    {
        cout << -1 << endl;
        return;
    }

    int w = max(x, y);

    if ((n - 1) % w != 0)
    {
        cout << -1 << endl;
        return;
    }

    int winner = 1;
    for (int i = 2; i <= n; i += w)
    {
        for (int j = 0; j < w; ++j)
            cout << winner << ' ';
        winner = i + w;
    }
    cout << endl;
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
