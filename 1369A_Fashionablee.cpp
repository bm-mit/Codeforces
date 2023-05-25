//* 207113114	May/25/2023 14:23UTC+7	Minh4893IT	A - FashionabLee	GNU C++17	Accepted	46 ms	0 KB

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
    cout << IF(n % 4, "NO", "YES") << endl;
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
