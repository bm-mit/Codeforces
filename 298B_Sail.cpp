//* 206720947	May/21/2023 15:38UTC+7	Minh4893IT	B - Sail	GNU C++17	Accepted	30 ms	300 KB

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
    int t, xaxis, yaxis, xtaxis, ytaxis;
    cin >> t >> xaxis >> yaxis >> xtaxis >> ytaxis;

    string wind;
    cin >> wind;

    map<char, pair<int, int>> direction = {
        {'E', {1, 0}},
        {'S', {0, -1}},
        {'W', {-1, 0}},
        {'N', {0, 1}}};

    if (xaxis == xtaxis && yaxis == ytaxis)
    {
        cout << 0;
        return;
    }

    int result = 0;
    for (auto c : wind)
    {
        int nextx = xaxis + direction[c].first;
        int nexty = yaxis + direction[c].second;

        int dist = abs(xaxis - xtaxis) + abs(yaxis - ytaxis);
        int nextdist = abs(nextx - xtaxis) + abs(nexty - ytaxis);

        if (nextdist < dist)
            xaxis = nextx, yaxis = nexty;
        ++result;

        if (xaxis == xtaxis && yaxis == ytaxis)
        {
            cout << result;
            return;
        }
    }
    cout << -1;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
