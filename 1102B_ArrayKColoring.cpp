//* 220032824	00:50:30	Minh4893IT	B - Array K-Coloring	GNU C++14	Accepted	31 ms	400 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> arr(n);
    map<int, int> count;
    int maxcount = 0;
    for (int i = 0; i < n; ++i)
        cin >> arr[i].first, arr[i].second = i, maxcount = max(maxcount, ++count[arr[i].first]);
    if (maxcount > k)
    {
        cout << "NO";
        return;
    }

    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; ++i)
        arr[i].first = i % k + 1;
    sort(arr.begin(), arr.end(), [](pair<int, int> a, pair<int, int> b)
         { return a.second < b.second; });

    cout << "YES" << endl;
    for (auto elem : arr)
        cout << elem.first << ' ';
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
