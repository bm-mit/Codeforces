//* 211007880	Jun/25/2023 16:17UTC+7	Minh4893IT	A - Vasya and Book	GNU C++17	Accepted	30 ms	0 KB

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

int calc(int start, int stop, int step)
{
    if (abs(start - stop) % step)
        return LLMAX;
    
    return abs(start - stop) / step;
}

void solve()
{
    int x, y, n, d;
    cin >> n >> x >> y >> d;

    if ((y - x) % d == 0)
    {
        cout << abs(x - y) / d << endl;
        return;
    }


    int res1 = calc(1, y, d);
    if (res1 != LLMAX)
        res1 += (x - 1 + d - 1) / d;

    int res2 = calc(n, y, d);
    if (res2 != LLMAX)
        res2 += (n - x + d - 1) / d;
    

    if (min(res1, res2) != LLMAX)
        cout << min(res1, res2) << endl;
    else
        cout << -1 << endl;
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
