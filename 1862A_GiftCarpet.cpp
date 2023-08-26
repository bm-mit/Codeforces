//* 220453271	Aug/26/2023 09:49UTC+7	Minh4893IT	A - Gift Carpet	GNU C++14	Accepted	15 ms	100 KB

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
    int n, m;
    cin >> n >> m;

    vector<string> board(n);
    for (int i = 0; i < n; ++i)
        cin >> board[i];

    int j = 0;
    for (auto c : "vika")
    {
        bool found = false;
        for (; j < m; ++j)
        {
            for (int i = 0; i < n; ++i)
                if (board[i][j] == c)
                {
                    found = true, ++j;

                    if (c == 'a')
                    {
                        cout << "YES" << endl;
                        return;
                    }
                    break;
                }
            
            if (found)
                break;
        }
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
