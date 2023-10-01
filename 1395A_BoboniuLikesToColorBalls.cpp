//* 226187554	Oct/01/2023 23:09UTC+7	Minh4893IT	A - Boboniu Likes to Color Balls	GNU C++14	Accepted	15 ms	0 KB

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

int r, g, b, w;
bool check()
{
    return r % 2 + g % 2 + b % 2 + w % 2 <= 1;
}

void solve()
{
    cin >> r >> g >> b >> w;

    if (check())
    {
        cout << "Yes" << endl;
        return;
    }

    if (r && g && b)
    {
        --r, --g, --b;
        w += 3;

        if (check())
        {
            cout << "Yes" << endl;
            return;
        }
    }

    cout << "No" << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
