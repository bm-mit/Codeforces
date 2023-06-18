//* 210035097	Jun/18/2023 15:11UTC+7	Minh4893IT	A - Unit Array	GNU C++17	Accepted	15 ms	0 KB

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

    int neg = 0;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        neg += val == -1;
    }

    int result = 0;
    if (neg % 2)
    {
        neg -= 1;
        ++result;
    }

    while (neg > n - neg)
    {
        neg -= 2;
        result += 2;
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
