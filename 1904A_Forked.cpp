//8 236799915	Dec/11/2023 22:25UTC+7	Minh4893IT	A - Forked!	GNU C++14	Accepted	15 ms	100 KB

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
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;

    map<pair<int, int>, bool> mark;
    for (int _ = 1 + (a != b); _--; swap(a, b))
        for (int i = -1; i <= 1; i += 2)
            for (int j = -1; j <= 1; j += 2)
                mark[{xk + i * a, yk + j * b}] = true;

    int result = 0;
    for (int _ = 1 + (a != b); _--; swap(a, b))
        for (int i = -1; i <= 1; i += 2)
            for (int j = -1; j <= 1; j += 2)
                result += mark[{xq + i * a, yq + j * b}];

    cout << result << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
