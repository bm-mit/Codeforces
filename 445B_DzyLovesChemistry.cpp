//* 224464129	Sep/21/2023 23:18UTC+7	Minh4893IT	B - DZY Loves Chemistry	GNU C++14	Accepted	15 ms	200 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

int n, m;
map<int, vector<int>> edge;
map<int, bool> mark;

int bfs(int curr)
{
    queue<int> q;

    q.push(curr);
    mark[curr] = true;

    int count = 1;
    while (q.size())
    {
        for (auto elem : edge[q.front()])
            if (!mark[elem])
            {
                ++count;
                q.push(elem);
                mark[elem] = true;
            }
        
        q.pop();
    }

    return count;
}

void solve()
{
    cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;

        edge[u].push_back(v);
        edge[v].push_back(u);
    }

    int result = 1;
    for (int i = 1; i <= n; ++i)
        if (!mark[i])
            result <<= (bfs(i) - 1);
    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
