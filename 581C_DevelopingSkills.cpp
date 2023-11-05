//* 231416463	Nov/05/2023 12:52UTC+7	Minh4893IT	C - Developing Skills	GNU C++14	Accepted	46 ms	800 KB

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
    int n, k;
    cin >> n >> k;

    array<int, 100005> arr;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.begin() + n, [](int a, int b)
         { return a % 10 > b % 10; });

    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        int val = min(k, 10 - arr[i] % 10);
        result += (arr[i] + val) / 10;
        k -= val;
    }

    cout << min(result + k / 10, n * 10);
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
