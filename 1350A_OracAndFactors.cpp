//* 208595694	Jun/05/2023 20:27UTC+7	Minh4893IT	A - Orac and Factors	GNU C++17	Accepted	15 ms	0 KB

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

    int divisor;
    bool isPrime = true;
    for (divisor = 2; divisor * divisor <= n; ++divisor)
        if (n % divisor == 0)
        {
            isPrime = false;
            break;
        }

    cout << n + IF(isPrime, n, divisor) + (k - 1) * 2 << endl;
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
