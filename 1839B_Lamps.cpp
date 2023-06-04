//* 208396170	Jun/04/2023 14:33UTC+7	Minh4893IT	B - Lamps	GNU C++17	Accepted	217 ms	8900 KB

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

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

void solve()
{
    int n;
    cin >> n;

    map<int, vector<int>> lamps;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;

        lamps[a].push_back(b);
    }

    int result = 0;

    for (auto elem : lamps)
    {
        sort(elem.second.begin(), elem.second.end(), greater<int>());

        for (int i = 0; i < min(elem.first, (int)elem.second.size()); ++i)
            result += elem.second[i];
    }

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
