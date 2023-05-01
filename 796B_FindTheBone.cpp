//* 204014082	Apr/30/2023 14:59UTC+7	Minh4893IT	B - Find The Bone	GNU C++17	Accepted	467 ms	32200 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
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
    int n, m, k;
    in >> n >> m >> k;

    uset<int> holes;
    for (int i = 0; i < m; ++i)
    {
        int temp;
        cin >> temp;
        holes.insert(temp);
    }

    int pos = 1;

    while (k--)
    {
        int u, v;
        in >> u >> v;

        if (holes.find(pos) != holes.end())
            break;

        if (u == pos)
            pos = v;
        else if (v == pos)
            pos = u;
        
        if (holes.find(pos) != holes.end())
            break;
    }

    cout << pos;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
