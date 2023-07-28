//* 216060883	Jul/28/2023 15:12UTC+7	Minh4893IT	A - Two Bags of Potatoes	GNU C++14	Accepted	62 ms	0 KB

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
    int y, k, n;
    cin >> y >> k >> n;

    bool res = false;
    for (int i = k - y % k; i <= n - y; i += k, res = true)
        cout << i << ' ';
    cout << IF(res, "", "-1");
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
