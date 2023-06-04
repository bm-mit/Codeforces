//* 208393289	Jun/04/2023 14:01UTC+7	Minh4893IT	A - The Good Array	GNU C++17	Accepted	31 ms	100 KB

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

    int result = 0;
    vector<bool> arr(n + 1);
    for (int i = 1; i * 2 - k <= n; i += k)
    {
        result += !arr[i];
        arr[i] = true;
    }

    for (int i = n; i > n / 2; i -= k)
    {
        result += !arr[i];
        arr[i] = true;
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
