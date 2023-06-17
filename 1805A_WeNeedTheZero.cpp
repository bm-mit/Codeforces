//* 209952665	Jun/17/2023 17:58UTC+7	Minh4893IT	A - We Need the Zero	GNU C++17	Accepted	15 ms	100 KB

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
    vector<int> arr(n);

    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        result ^= arr[i];
    }

    int check = 0;
    for (int i = 0; i < n; ++i)
        check ^= arr[i] ^ result;

    if (!check)
        cout << result << endl;
    else
        cout << -1 << endl;
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
