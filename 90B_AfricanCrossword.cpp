//* 204308731	May/03/2023 10:07UTC+7	Minh4893IT	B - African Crossword	GNU C++14	Accepted	30 ms	500 KB

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
#define pq priority_queue

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

void solve()
{
    int n, m;
    string s;
    GET(s);

    ss stream(s);
    stream >> n >> m;

    vector<vector<int>> board(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        GET(s);

        for (int j = 0; j < m; ++j)
            board[i][j] = s[j];
    }

    vector<map<int, int>> rowAppear(n), colAppear(m);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            ++rowAppear[i][board[i][j]];
            ++colAppear[j][board[i][j]];
        }
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (rowAppear[i][board[i][j]] > 1 || colAppear[j][board[i][j]] > 1)
                continue;
            cout << (char)board[i][j];
        }
    }
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
