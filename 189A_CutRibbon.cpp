//* 218140245	Aug/10/2023 16:53UTC+7	Minh4893IT	A - Cut Ribbon	GNU C++14	Accepted	218 ms	0 KB

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
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int result = 0;
    for (int x = 0; x <= 4000; ++x)
        for (int y = 0; y <= 4000; ++y)
        {
            int left = n - (a * x + b * y);
            if (left % c || left / c < 0)
                continue;

            int z = left / c;
            if (x >= 0 && y >= 0 && z >= 0)
                result = max(result, x + y + z);
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
