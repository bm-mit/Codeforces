//* 215929501	Jul/27/2023 22:18UTC+7	Minh4893IT	B - Monsters	GNU C++14	Accepted	498 ms	4700 KB

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

int n, k;
bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first % k == b.first % k)
        return a.second < b.second;
    return IF(a.first % k, a.first % k, k) > IF(b.first % k, b.first % k, k);
}

void solve()
{
    cin >> n >> k;

    vector<pair<int, int>> idx(n);
    for (int i = 0; i < n; ++i)
        cin >> idx[i].first, idx[i].second = i + 1;

    sort(idx.begin(), idx.end(), comp);
    for (int i = 0; i < n; ++i)
        cout << idx[i].second << ' ';
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
