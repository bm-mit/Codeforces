//* 228812505	Oct/19/2023 21:09UTC+7	Minh4893IT	A - Ilya and Bank Account	GNU C++14	Accepted	30 ms	0 KB

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
    string s;
    cin >> s;

    if (s.front() != '-')
    {
        cout << s;
        return;
    }

    if (s.size() == 3)
    {
        if (s.back() == '0')
        {
            cout << 0;
            return;
        }
    }

    cout << s.substr(0, s.size() - 2) << min(s.back(), s[s.size() - 2]);
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
