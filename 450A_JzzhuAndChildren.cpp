//* 216720992	Aug/01/2023 21:01UTC+7	Minh4893IT	A - Jzzhu and Children	GNU C++14	Accepted	15 ms	0 KB

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

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i].first;
        arr[i].first = (arr[i].first + m - 1) / m;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());
    cout << arr.back().second;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
