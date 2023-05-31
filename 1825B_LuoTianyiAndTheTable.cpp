//* 207965135	May/31/2023 20:11UTC+7	Minh4893IT	B - LuoTianyi and the Table	GNU C++17	Accepted	77 ms	100 KB

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
    int n, m;
    cin >> n >> m;

    vector<int> arr(n * m);
    for (auto &elem : arr)
        cin >> elem;
    sort(arr.begin(), arr.end());

    cout << (arr.back() - arr.front()) * (n * m - min(n, m)) + max(arr[arr.size() - 2] - arr.front(), arr.back() - arr[1]) * (min(n, m) - 1) << endl;
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
