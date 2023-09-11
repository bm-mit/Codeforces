//* 222232985	Sep/07/2023 21:46UTC+7	Minh4893IT	A - Two Vessels	GNU C++14	Accepted	0 ms	0 KB

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
    int a, b, c;
    cin >> a >> b >> c;

    a *= 10, b *= 10, c *= 10;

    if (a > b)
        swap(a, b);

    int avr = (a + b) / 2;
    cout << (b - avr) / c + ((b - avr) % c != 0) << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
