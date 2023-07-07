//* 212537901	Jul/07/2023 17:04UTC+7	Minh4893IT	F - Forever Winter	GNU C++14	Accepted	218 ms	200 KB

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

map<int, vector<int>> edges;
map<int, int> mindist;
map<int, bool> visited;

int dfs(int node)
{
    if (mindist[node])
        return mindist[node];
    if (visited[node])
        return LLMAX;

    visited[node] = true;
    if (edges[node].size() == 1)
        return mindist[node] = 1;

    int dist = LLMAX;
    for (auto subnode : edges[node])
        dist = min(dist, dfs(subnode));

    if (dist == LLMAX)
        return mindist[node] = 1;
    return mindist[node] = dist + 1;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    edges.clear();
    mindist.clear();
    visited.clear();

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    int root = 0;
    for (int i = 1; i <= n; ++i)
        if (dfs(i) == 3)
        {
            root = i;
            break;
        }

    cout << edges[root].size() << ' ' << edges[edges[root][0]].size() - 1 << endl;
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
