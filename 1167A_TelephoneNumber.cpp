//* 220026692	Aug/23/2023 18:58UTC+7	Minh4893IT	A - Telephone Number	GNU C++14	Accepted	30 ms	0 KB

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
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i <= n - 11; ++i)
        if (s[i] == '8')
        {
            cout << "YES" << endl;
            return;
        }

    cout << "NO" << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
