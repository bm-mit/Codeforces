//* 206432469	May/19/2023 17:13UTC+7	Minh4893IT	B - War of the Corporations	GNU C++17	Accepted	31 ms	300 KB

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
    string g, p;
    GET(g);
    GET(p);

    int result = 0;
    for (int i = 0; i <= (int)g.size() - p.size(); ++i)
        if (g.substr(i, p.size()) == p)
        {
            ++result;
            i += p.size() - 1;
        }
    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
