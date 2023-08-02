//* 216785824	Aug/02/2023 10:04UTC+7	Minh4893IT	A - Supercentral Point	GNU C++14	Accepted	30 ms	200 KB

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

    vector<pair<int, int>> points(n);
    map<int, vector<int>> x, y;

    for (int i = 0; i < n; ++i)
    {
        cin >> points[i].first >> points[i].second;
        x[points[i].first].push_back(points[i].second);
        y[points[i].second].push_back(points[i].first);
    }

    for (auto &p : x)
        sort(p.second.begin(), p.second.end());
    for (auto &p : y)
        sort(p.second.begin(), p.second.end());

    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        int xi = points[i].first;
        int yi = points[i].second;

        int maxx = y[yi].back();
        int minx = y[yi].front();
        int maxy = x[xi].back();
        int miny = x[xi].front();


        result += xi != maxx && xi != minx && yi != miny && yi != maxy;
    }

    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
