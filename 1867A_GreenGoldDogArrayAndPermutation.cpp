//* 22915603	Sep/11/2023 21:41UTC+7	Minh4893IT	A - green_gold_dog, array and permutation	GNU C++14	Accepted	31 ms	1000 KB

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
    for (int i = 0; i < n; ++i)
        cin >> arr[i].first, arr[i].second = i;
    sort(arr.rbegin(), arr.rend());

    vector<int> result(n);
    for (int i = 1; i <= n; ++i)
        result[arr[i - 1].second] = i;
    for (auto elem : result)
        cout << elem << ' ';
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
