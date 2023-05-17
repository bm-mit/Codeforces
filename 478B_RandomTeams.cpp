//* 206188639	May/17/2023 16:01UTC+7	Minh4893IT	B - Random Teams	GNU C++17	Accepted	15 ms	0 KB

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

int sum(int n)
{
    return n * (n + 1) / 2;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    int memteam1 = n / m;
    int memteam2 = n % m;
    int res1 = sum(memteam1) * memteam2 + sum(memteam1 - 1) * (m - memteam2);
    int res2 = sum(n - m);

    cout << res1 << ' ' << res2;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
