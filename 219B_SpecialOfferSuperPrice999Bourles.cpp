//* 233704816	Nov/21/2023 22:10UTC+7	Minh4893IT	B - Special Offer! Super Price 999 Bourles!	GNU C++14	Accepted	30 ms	0 KB

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
    int n, d;
    cin >> n >> d;

    int curr = 1;
    int result = n;
    while (curr <= n)
    {
        curr *= 10;
        if (n % curr + 1 <= d && curr <= n)
            result = n - n % curr - 1;
        if (n % curr == result % curr)
            result = n;
    }
    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
