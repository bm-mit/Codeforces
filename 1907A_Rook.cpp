//* 235873435	Dec/05/2023 21:56UTC+7	Minh4893IT	A - Rook	GNU C++14	Accepted	15 ms	0 KB

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
    for (char c = 'a'; c <= 'h'; ++c)
        for (int i = 1; i <= 8; ++i)
            if ((c == s[0] || i == s[1] - '0') && string {c, i + '0'} != s)
                cout << c << i << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
