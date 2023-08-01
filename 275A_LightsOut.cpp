//* 216646605	Aug/01/2023 08:43UTC+7	Minh4893IT	A - Lights Out	GNU C++14	Accepted	15 ms	0 KB

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

bool valid(int i, int j)
{
    return 0 <= i && i < 3 && 0 <= j && j < 3;
}

void solve()
{
    vector<vector<bool>> board(3, vector<bool>(3));
    board[0].flip(), board[1].flip(), board[2].flip();

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            int times;
            cin >> times;
            if (times % 2 == 0)
                continue;

            board[i][j].flip();
            vector<pair<int, int>> side = {
                {0, 1},
                {0, -1},
                {1, 0},
                {-1, 0}};
            for (auto p : side)
                if (valid(p.first + i, p.second + j))
                    board[p.first + i][p.second + j].flip();
        }
    
    for (auto b : board)
    {
        for (auto i : b)
            cout << i;
        cout << endl;
    }
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
