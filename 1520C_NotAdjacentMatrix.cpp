//* 210625095	Jun/22/2023 13:55UTC+7	Minh4893IT	C - Not Adjacent Matrix	GNU C++17	Accepted	155 ms	0 KB

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

    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int cell = i * n + j;
            if (cell % 2)
                cout << n * n / 2 + cell / 2 + 1 + n % 2 << ' ';
            else
                cout << cell / 2 + 1 << ' ';
        }
        cout << endl;
    }
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
