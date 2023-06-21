//* 210518119	Jun/21/2023 15:02UTC+7	Minh4893IT	E - The Lakes	GNU C++17	Accepted	342 ms	117800 KB

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

vector<vector<int>> board;

int n, m;
bool valid(int i, int j)
{
    return 0 <= i && i < n && 0 <= j && j < m;
}

int loang(int i, int j)
{
    if (!valid(i, j))
        return 0;

    if (!board[i][j])
        return 0;

    int val = board[i][j];
    board[i][j] = 0;

    return loang(i + 1, j) +
           loang(i, j + 1) +
           loang(i - 1, j) +
           loang(i, j - 1) + val;
}

void solve()
{
    cin >> n >> m;

    board = vector<vector<int>>(n, vector<int>(m));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> board[i][j];

    int result = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            result = max(result, loang(i, j));
    cout << result << endl;
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
