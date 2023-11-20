//* 233318665	Nov/18/2023 22:30UTC+7	Minh4893IT	E - Queue Sort	GNU C++14	Accepted	77 ms	1600 KB

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

    array<int, 200005> arr;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int minIdx = min_element(arr.begin(), arr.begin() + n) - arr.begin();

    cout << IF(is_sorted(arr.begin() + minIdx, arr.begin() + n), minIdx, -1) << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
