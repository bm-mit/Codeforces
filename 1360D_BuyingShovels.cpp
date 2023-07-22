//* 215063526	Jul/22/2023 22:21UTC+7	Minh4893IT	D - Buying Shovels	GNU C++14	Accepted	46 ms	0 KB

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

    int result = n;
    for (int i = 1; i * i <= n; ++i)
        if (n % i == 0)
        {
            if (i <= k)
                result = min(result, n / i);
            if (n / i <= k)
                result = min(result, n / (n / i));
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
