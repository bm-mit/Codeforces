//* 203773269	Apr/28/2023 14:25UTC+7	Minh4893IT	B - Matrix Rotation	GNU C++17	Accepted	0 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define s string
#define uset unordered_set
#define umap unordered_map

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
    vector<pair<int, int>> board(4);
    for (int i = 0; i < 4; ++i)
    {
        cin >> board[i].first;
        board[i].second = i + 1;
    }

    sort(board.begin(), board.end());

    pair<int, int> idx = {board[0].second, board[3].second};
    if (idx.first > idx.second)
        swap(idx.first, idx.second);
    cout << IF((idx == pair<int, int>{1, 4} || idx == pair<int, int>{2, 3}), "YES", "NO") << endl;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    int t;
    in >> t;

    while (t--)
        solve();

    return 0;
}
