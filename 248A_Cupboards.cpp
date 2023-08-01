//* 216646955	Aug/01/2023 08:48UTC+7	Minh4893IT	A - Cupboards	GNU C++14	Accepted	62 ms	0 KB

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

    int l = 0, r= 0;
    for (int i = 0; i < n; ++i)
    {
        int _l, _r;
        cin >> _l >> _r;
        l += _l;
        r += _r;
    }

    cout << min(l, n - l) + min(r, n - r);
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
