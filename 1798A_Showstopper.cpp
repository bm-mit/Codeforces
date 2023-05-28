//* 207544655	May/28/2023 15:09UTC+7	Minh4893IT	A - Showstopper	GNU C++17	Accepted	0 ms	200 KB

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

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    int maxm = max(a.back(), b.back());
    int minm = min(a.back(), b.back());

    for (int i = 0; i < n; ++i)
    {
        int minv = min(a[i], b[i]);
        int maxv = max(a[i], b[i]);

        if (minv > minm || maxv > maxm)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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
