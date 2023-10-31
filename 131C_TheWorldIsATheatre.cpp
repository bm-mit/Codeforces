//* 230720323	Nov/01/2023 00:24UTC+7	Minh4893IT	C - The World is a Theatre	GNU C++14	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long
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

array<array<int, 31>, 31> C;

void preprocess()
{
    int n = 30;

    C[0][0] = 1;
    for (int i = 1; i <= n; ++i)
    {
        C[i][0] = 1;
        for (int j = 1; j <= i; ++j)
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
    }
}

void solve()
{
    int n, m, t;
    cin >> n >> m >> t;

    int result = 0;
    for (int i = 4; i <= n; ++i)
        if (0 < t - i && t - i <= m)
            result += C[n][i] * C[m][t - i];
    cout << result;
}

signed main()
{
    FAST_IO;

    preprocess();

    // MULTI
    solve();

    return 0;
}
