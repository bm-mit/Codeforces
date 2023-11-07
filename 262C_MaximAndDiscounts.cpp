//* 231745789	Nov/07/2023 21:27UTC+7	Minh4893IT	C - Maxim and Discounts	GNU C++14	Accepted	154 ms	800 KB

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
    int m;
    cin >> m;

    int discount = 1000000;
    for (int i = 0; i < m; ++i)
    {
        int val;
        cin >> val;

        discount = min(discount, val);
    }

    int n;
    cin >> n;

    array<int, 100005> arr;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.begin() + n, greater<int>());

    int result = 0;
    for (int i = 0; i < n; i += 2)
        for (int k = 0; k < discount && i < n; ++k)
            result += arr[i++];
    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
