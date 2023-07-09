//* 212586160	Jul/07/2023 21:50UTC+7	Minh4893IT	B - Rudolph and Tic-Tac-Toe	GNU C++14	Accepted	46 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define pq priority_queue
#define endl "\n"

#define LLMAX INT64_MAX
#define GET(var) getline(cin, var)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()

string board[3];
bool all(string s)
{
    return s[0] == s[1] && s[1] == s[2];
}

string getcol(int col)
{
    return string{board[0][col], board[1][col], board[2][col]};
}

void solve()
{
    for (int i = 0; i < 3; ++i)
        cin >> board[i];

    for (int row = 0; row < 3; ++row)
    {
        if (board[row][0] != '.' && all(board[row]))
        {
            cout << board[row][0] << endl;
            return;
        }
    }

    for (int col = 0; col < 3; ++col)
    {
        if (board[0][col] != '.' && all(getcol(col)))
        {
            cout << board[0][col] << endl;
            return;
        }
    }

    string diag1 = string{board[0][0], board[1][1], board[2][2]};
    if (diag1[0] != '.' && all(diag1))
    {
        cout << diag1[0] << endl;
        return;
    }

    string diag2 = string{board[0][2], board[1][1], board[2][0]};
    if (diag2[0] != '.' && all(diag2))
    {
        cout << diag2[0] << endl;
        return;
    }

    cout << "DRAW\n";
}

signed main()
{
    FAST_IO;

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
