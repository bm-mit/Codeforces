//* 219122839	Aug/16/2023 21:18UTC+7	Minh4893IT	A - Domino	GNU C++14	Accepted	30 ms	0 KB

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
    int n;
    cin >> n;

    int sumup = 0, sumbot = 0;
    bool able = false;
    for (int i = 0; i < n; ++i)
    {
        int up, bot;
        cin >> up >> bot;
        if (up % 2 != bot % 2)
            able = true;
        sumup += up;
        sumbot += bot;
    }

    if (sumup% 2 == 0 && sumbot % 2 == 0)
        cout << 0;
    else if (sumup % 2 == 1 && sumbot % 2 == 1 && able)
        cout << 1;
    else
        cout << -1;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
