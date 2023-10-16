//* 28462433	Oct/17/2023 01:51UTC+7	Minh4893IT	B - Array Reodering	GNU C++14	Accepted	280 ms	0 KB

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

bool comp(int &a, int &b)
{
    if (a % 2 == 0)
        return true;
    if (b % 2 == 0)
        return false;

    return a > b;
}

void solve()
{
    int n;
    cin >> n;

    array<int, 2000> arr;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr.begin(), arr.begin() + n, [](int &a, int &b)
         { return (a & 1) < (b & 1); });

    int result = 0;
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            result += __gcd(arr[i], arr[j] << 1) > 1;
    cout << result << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
