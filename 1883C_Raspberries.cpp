//* 229715254	Oct/25/2023 22:20UTC+7	Minh4893IT	C - Raspberries	GNU C++14	Accepted	46 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

// #define int long long
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
    int n, k;
    cin >> n >> k;

    if (k == 4)
    {
        int even = 0;
        int result = 2;
        for (int i = 0; i < n; ++i)
        {
            int val;
            cin >> val;

            even += val % 2 == 0;
        result = min(result, (k - val % k) % k);
        }

        cout << min(result, 2 - min(2, even)) << endl;
        return;
    }

    int result = k - 1;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;

        result = min(result, (k - val % k) % k);
    }

    cout << result << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
