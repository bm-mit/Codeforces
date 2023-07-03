//* 211891214	Jul/03/2023 09:54UTC+7	Minh4893IT	B - Table Tennis	GNU C++14	Accepted	15 ms	0 KB

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
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> players(1);
    cin >> players[0].first;
    for (int i = 1; i < n; ++i)
    {
        int val;
        cin >> val;
        if (val > players.back().first)
            players.push_back({val, 1});
        else
            players.push_back({players.back().first, players.back().second + 1});
        if (players.back().second >= k)
            break;
    }

    cout << players.back().first;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
