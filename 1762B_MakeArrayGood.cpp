//* 208131576	Jun/02/2023 12:55UTC+7	Minh4893IT	B - Make Array Good	GNU C++17	Accepted	93 ms	4700 KB

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

    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());

    int last = arr.front().first;
    vector<pair<int, int>> result;
    for (auto p : arr)
    {
        if (p.first % last == 0)
        {
            last = p.first;
            continue;
        }
        result.push_back({p.second, last - p.first % last});
        last = p.first + last - p.first % last;
    }

    cout << result.size() << endl;
    for (auto p : result)
        cout << p.first << ' ' << p.second << endl;
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
