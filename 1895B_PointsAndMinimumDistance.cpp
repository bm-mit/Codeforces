//* 231835697	Nov/08/2023 01:09UTC+7	Minh4893IT	B - Points and Minimum Distance	GNU C++14	Accepted	15 ms	0 KB

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

    array<int, 205> arr;
    for (int i = 0; i < 2 * n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.begin() + 2 * n);

    int result = 0;
    for (int i = 1, j = n + 1; i < n; ++i, ++j)
        result += abs(arr[i] - arr[i - 1]) + abs(arr[j] - arr[j - 1]);
    cout << result << endl;

    for (int i= 0; i < n; ++i)
        cout << arr[i] << ' ' << arr[n + i] << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
