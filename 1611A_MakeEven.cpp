//* 222665011	Sep/10/2023 11:15UTC+7	Minh4893IT	A - Make Even	GNU C++14	Accepted	15 ms	0 KB

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
    string n;
    cin >> n;

    if (n.back() % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }

    if (n.front() % 2 == 0)
    {
        cout << 1 << endl;
        return;
    }

    cout << IF(find_if(n.begin(), n.end(), [](char c) {return c % 2 == 0;}) != n.end(), 2, -1) << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
