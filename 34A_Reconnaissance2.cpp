//* 216988934	Aug/03/2023 19:53UTC+7	Minh4893IT	A - Reconnaissance 2	GNU C++14	Accepted	30 ms	0 KB

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
    
    int res = 0;
    int mindiff = abs(arr[0] - arr[1]);
    for (int i = 0; i < n; ++i)
    {
        int diff = abs(arr[i] - arr[(i + 1) % n]);
        if (diff < mindiff)
        {
            mindiff = diff;
            res = i;
        }
    }

    cout << res + 1 << ' ' << (res + 1) % n + 1;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
