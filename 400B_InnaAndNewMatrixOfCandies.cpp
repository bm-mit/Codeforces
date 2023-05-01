//* 203863018	Apr/29/2023 10:27UTC+7	Minh4893IT	B - Inna and New Matrix of Candies	GNU C++17	Accepted	31 ms	1900 KB

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

#define in cin
#define out cout
#define input cin
#define print cout
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
    s line;
    GET(line);

    ss stream(line);

    stream >> n;

    vector<string> board(n);
    EACH(elem, board)
    {
        GET(elem);
    }

    uset<int> dist;
    int result = -1;

    for (int i = 0; i < n; ++i)
    {
        auto line = board[i];
        int dPos = line.find('G');
        int cPos = line.find('S');

        if (dPos <= cPos)
        {
            dist.insert(cPos - dPos);
            result = dist.size();
        }
        else
        {
            result = -1;
            break;
        }
    }

    print << result;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
