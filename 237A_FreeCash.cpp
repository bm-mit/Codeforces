//* 217862032	Aug/08/2023 19:40UTC+7	Minh4893IT	A - Free Cash	GNU C++14	Accepted	92 ms	200 KB

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

    map<pair<int, int>, int> count;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        count[{a, b}]++;
    }

    int result = 0;
    for (auto p : count)
        result = max(result, p.second);
    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
