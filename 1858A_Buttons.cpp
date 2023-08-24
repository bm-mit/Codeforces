//* 218923202	Aug/15/2023 21:39UTC+7	Minh4893IT	A - Buttons	GNU C++14	Accepted	31 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (c % 2)
        cout << IF(a >= b, "First", "Second");
    else
        cout << IF(b >= a, "Second", "First");
    cout << endl;

}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
