//* 210623467	Jun/22/2023 13:34UTC+7	Minh4893IT	D - Same Differences	GNU C++17	Accepted	78 ms	8100 KB

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
        int val;
        cin >> val;
        ++count[val - i];
    }

    int result = 0;
    for (auto p : count)
        result += p.second * (p.second - 1) / 2;
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
