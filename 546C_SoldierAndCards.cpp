//* 229019756	Oct/21/2023 13:57UTC+7	Minh4893IT	C - Soldier and Cards	GNU C++14	Accepted	15 ms	0 KB

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

    int k1, k2;
    cin >> k1;

    queue<int> org1, org2, q1, q2;
    for (int i = 0; i < k1; ++i)
    {
        int x;
        cin >> x;
        org1.push(x);
        q1.push(x);
    }

    cin >> k2;
    for (int i = 0; i < k2; ++i)
    {
        int x;
        cin >> x;
        org2.push(x);
        q2.push(x);
    }

    for (int i = 0; i < 100000; ++i)
    {
        if (q1.empty())
        {
            cout << i << ' ' << 2;
            return;
        }

        if (q2.empty())
        {
            cout << i << ' ' << 1;
            return;
        }

        int x = q1.front();
        int y = q2.front();
        q1.pop(), q2.pop();

        if (x < y)
            q2.push(x), q2.push(y);
        else
            q1.push(y), q1.push(x);
    }

    cout << -1;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
