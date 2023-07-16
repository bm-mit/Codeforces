//* 214042188	Jul/16/2023 20:32UTC+7	Minh4893IT	C - Paint the Array	GNU C++14	Accepted	46 ms	100 KB

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
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    bool case1 = true;
    int g1 = arr[1];
    for (int i = 1; i < n; i += 2)
        g1 = __gcd(g1, arr[i]);
    for (int i = 0; i < n; i += 2)
        if (arr[i] % g1 == 0)
        {
            case1 = false;
            break;
        }

    bool case2 = true;
    int g2 = arr[0];
    for (int i = 0; i < n; i += 2)
        g2 = __gcd(g2, arr[i]);
    for (int i = 1; i < n; i += 2)
        if (arr[i] % g2 == 0)
        {
            case2 = false;
            break;
        }

    cout << IF(case1, g1, IF(case2, g2, 0)) << endl;
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
