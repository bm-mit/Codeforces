//* 212385003	Jul/06/2023 21:54UTC+7	Minh4893IT	A - The Man who became a God	GNU C++14	Accepted	30 ms	200 KB

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

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    vector<pair<int, int>> diff;
    for (int i = 1; i < n; ++i)
        diff.push_back({abs(arr[i] - arr[i - 1]), i});

    sort(diff.begin(), diff.end(), greater<pair<int, int>>());

    map<int, bool> ignore;
    for (int i = 1; i < k; ++i)
        ignore[diff[i - 1].second] = true;

    int result = 0;
    for (int i = 1; i < n; ++i)
    {
        if (ignore[i])
            continue;
        result += abs(arr[i] - arr[i - 1]);
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
