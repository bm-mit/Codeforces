//* 204107783	May/01/2023 12:34UTC+7	Minh4893IT	B - Little Elephant and Magic Square	GNU C++17	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define vec vector

#define LLMAX INT64_MAX

#define in cin
#define out cout
#define input in
#define print out
#define GET(var) getline(cin, var)

#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define FORIR(i, a, n) for (int i = a; i < n; i++)
#define FORI(i, n) FORIR(i, 0, n)
#define FORR(a, n) FORIR(i, a, n)
#define FOR(n) FORIR(i, 0, n)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
template <class T>
void OFILE(T finp, T fout)
{
    freopen(finp, "r", stdin), freopen(fout, "w", stdout);
}

vec<vec<int>> board(3, vec<int>(3));

bool check()
{
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[i][j] < 1 || board[i][j] > 100000)
                return false;

    int rows[3] = {};

    int cols[3] = {};

    int dia1, dia2;
    dia1 = dia2 = 0;

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            rows[i] += board[i][j];
            cols[j] += board[i][j];
        }

    dia1 = board[0][0] + board[1][1] + board[2][2];
    dia2 = board[0][2] + board[1][1] + board[2][0];

    for (int i = 1; i < 3; ++i)
    {
        if (rows[i] != rows[i - 1])
            return false;
        if (cols[i] != cols[i - 1])
            return false;
    }

    return cols[0] == rows[0] && dia1 == dia2 && dia1 == rows[0];
}

void solve()
{

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> board[i][j];

    for (board[0][0] = 1; board[0][0] <= 100000; ++board[0][0])
    {
        int sum = board[0][0] + board[0][1] + board[0][2];
        board[1][1] = sum - (board[0][1] + board[2][1]);
        board[2][2] = sum - (board[0][0] + board[1][1]);
        if (check())
            break;
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cout << board[i][j] << ' ';
        cout << endl;
    }
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
