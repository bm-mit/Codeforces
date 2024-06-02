//* 263733855	Jun/02/2024 17:10UTC+7	Minh4893IT	A - Maximize?	C++17 (GCC 7-32)	Accepted	155 ms	0 KB

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

    int max = 0;
    int result = n - 1;
    for (int i = 1; i < n; ++i)
        if (__gcd(i, n) + i > max)
            max = __gcd(i, n) + (result = i);
    cout << result << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
