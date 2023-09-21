//* 223722894	Sep/17/2023 19:03UTC+7	Minh4893IT	A - IQ test	GNU C++14	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n ;++i)
        cin >> arr[i].first, arr[i].second = i;
    sort(arr.begin(), arr.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.first % 2 < b.first % 2;
    });

    cout << IF(arr[0].first % 2 != arr[1].first % 2, arr.front().second + 1, arr.back().second + 1);
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
