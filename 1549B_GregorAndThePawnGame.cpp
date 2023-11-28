//* 234799955	Nov/28/2023 22:54UTC+7	Minh4893IT	B - Gregor and the Pawn Game	GNU C++14	Accepted	46 ms	4000 KB

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
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    map<int, bool> mark;

    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        if (b[i] - '0')
        {
            if (a[i] != b[i] && !mark[i])
                result += mark[i] = true;
            else if (i > 0 && a[i - 1] - '0' && !mark[i - 1])
                result += (mark[i - 1] = true);
            else if (i < n - 1 && a[i + 1] - '0')
                result += (mark[i + 1] = true);
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
