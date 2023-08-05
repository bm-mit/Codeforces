//* 217226070	Aug/05/2023 15:53UTC+7	Minh4893IT	A - Sereja and Bottles	GNU C++14	Accepted	30 ms	0 KB

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

    vector<pair<int, int>> bottles(n);
    vector<int> count(1005);

    for (int i = 0; i < n; ++i)
    {
        cin >> bottles[i].first >> bottles[i].second;
        ++count[bottles[i].second];
    }

    int result = 0;
    for (auto p : bottles)
        if ((p.first == p.second && count[p.first] <= 1) || count[p.first] == 0)
            ++result;

    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
