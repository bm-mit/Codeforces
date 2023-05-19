//* 206462919	00:06:10	Minh4893IT	A - Musical Puzzle	GNU C++17	Accepted	93 ms	140 KB

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
    string s;
    cin >> s >> s;
    set<string> se;
    for (int i = 0; i <= s.length() - 2; ++i)
        se.insert(s.substr(i, 2));
    cout << se.size() << endl;
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
