//* 237802663	Dec/18/2023 23:10UTC+7	Minh4893IT	C - Insert and Equalize	GNU C++14	Accepted	93 ms	1600 KB

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
    array<int, 200005> arr;

    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    if (n == 1)
        return void(cout << 1 << endl);
    sort(arr.begin(), arr.begin() + n);

    int gcd = arr[1] - arr[0];
    for (int i = 2; i < n; ++i)
        gcd = __gcd(gcd, arr[i] - arr[i - 1]);

    int target = *max_element(arr.begin(), arr.begin() + n) + gcd;
    for (int i = 1; i < n; ++i)
        if ((arr[i] - arr[i - 1]) / gcd > 1)
            target = arr[i] - gcd;
    arr[n] = target;

    int result = 0;
    for (int i = 0; i <= n; ++i)
        result += abs(max(arr[n - 1], target) - arr[i]) / gcd;
    cout << result << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
