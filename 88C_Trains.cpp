//* 230755075	Nov/01/2023 08:57UTC+7	Minh4893IT	C - Trains	GNU C++14	Accepted	30 ms	0 KB

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
    int a, b;
    cin >> a >> b;

    int lcm = a / __gcd(a, b) * b;

    int dasha = lcm / a - 1;
    int masha = lcm / b - 1;

    if (dasha < masha)
        ++dasha;
    else
        ++masha;
    
    cout << IF(dasha == masha, "Equal", IF(dasha > masha, "Dasha", "Masha"));
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
