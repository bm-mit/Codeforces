//* 228944093	Oct/20/2023 22:19UTC+7	Minh4893IT	C - Target Practice	GNU C++14	Accepted	0 ms	0 KB

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
    int result = 0;

    for (int i= 0; i < 10 ; ++i)
        for (int j = 0; j < 10 ; ++j)
        {
            char c;
            cin >> c;

            if (c == 'X')
            {
                int x = min(i + 1, 10 - i);
                int y = min(j + 1, 10 - j);

                result += min(x, y);
            }
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
