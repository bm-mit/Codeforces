//* 237211779	Dec/14/2023 17:57UTC+7	Minh4893IT	B - Getting Points	GNU C++14	Accepted	15 ms	0 KB

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
    int n, p, l, t;
    cin >> n >> p >> l >> t;

    int maxPointPerDay = 2 * t + l;
    int minimumDay = (p + maxPointPerDay - 1) / maxPointPerDay;

    minimumDay = min(minimumDay, (n + 6) / 14);

    int pointArchieved = minimumDay * maxPointPerDay;
    if (pointArchieved >= p)
    {
        cout << n - minimumDay << endl;
        return;
    }

    if ((n + 13) % 14 < 7)
    {
        ++minimumDay;
        pointArchieved += t + l;
    }

    if (pointArchieved >= p)
    {
        cout << n - minimumDay << endl;
        return;
    }

    cout << n - minimumDay - (p - pointArchieved + l - 1) / l << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
