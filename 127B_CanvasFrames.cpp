//* 206099824	May/16/2023 21:30UTC+7	Minh4893IT	B - Canvas Frames	GNU C++17	Accepted	15 ms	100 KB

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

    map<int, int> count;
    for (int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;
        ++count[t];
    }

    int sum = 0;
    for (auto p : count)
        sum += p.second - p.second % 2;
    cout << sum / 4;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
