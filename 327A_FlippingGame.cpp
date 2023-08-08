//* 217864304	Aug/08/2023 19:58UTC+7	Minh4893IT	A - Flipping Game	GNU C++14	Accepted	30 ms	0 KB

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

    vector<int> pref(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> pref[i];
        pref[i] = pref[i - 1] + pref[i];
    }

    int res = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 0; j < i; ++j)
        {
            int front = pref[j];
            int back = pref[n] - pref[i];
            int mid = (i - j) - (pref[i] - pref[j]);
            res = max(res, front + mid + back);
        }
    cout << res;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
