//* 218565765	Aug/12/2023 23:09UTC+7	Minh4893IT	B - Olya and Game with Arrays	GNU C++14	Accepted	124 ms	1200 KB

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

    vector<vector<int>> board(n);
    vector<int> second(n);
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int m;
        cin >> m;
        board[i].resize(m);
        for (int j = 0; j < m; ++j)
            cin >> board[i][j];
        sort(board[i].begin(), board[i].end());
        sum += board[i][1];
        second[i] = board[i][1];
    }

    sum -= *min_element(second.begin(), second.end());
    int mi = board[0][0];
    for (int i = 0; i < n; ++i)
        mi = min(mi, board[i][0]);
    sum += mi;

    cout << sum << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
