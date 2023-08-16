//* 219112082	Aug/16/2023 19:54UTC+7	Minh4893IT	A - Cinema Line	GNU C++14	Accepted	62 ms	0 KB

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
    map<int, int> count;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
            ++count[val];

        int need = val - 25;
        if (need == 0)
            continue;

        if (need == 25)
        {
            if (!count[25])
            {
                cout << "NO";
                return;
            }
            --count[25];
            continue;
        }

        if (need == 75)
        {
            if (count[50] && count[25])
            {
                --count[50], --count[25];
                continue;
            }

            if (count[25] >= 3)
            {
                count[25] -= 3;
                continue;
            }

            cout << "NO";
            return;
        }
    }

    cout << "YES";
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
