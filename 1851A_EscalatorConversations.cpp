//* 215513866	Jul/25/2023 21:44UTC+7	Minh4893IT	A - Escalator Conversations	GNU C++14	Accepted	15 ms	0 KB

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
    int n, m, k, h;
    cin >> n >> m >> k >> h;

    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;

        if (val % k != h % k || h == val)
            continue;

        int dist = abs(h - val);
        result += dist / k + 1 <= m;
    }

    cout << result << endl;
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
