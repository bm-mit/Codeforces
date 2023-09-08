//* 222306105	Sep/07/2023 22:58UTC+7	Minh4893IT	C - Non-coprime Split	GNU C++14	Accepted	15 ms	0 KB

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

int div(int n)
{
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return i;
    return 0;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    if (b <= 3)
    {
        cout << -1 << endl;
        return;
    }

    if (a != b || a % 2 == 0)
    {
        cout << 2 << ' ' << b - 2 - b % 2 << endl;
        return;
    }

    int t = div(a);
    if (t)
        cout << t << ' ' << a - t << endl;
    else
        cout << -1 << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
