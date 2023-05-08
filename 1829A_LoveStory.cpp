//* 205128758	May/08/2023 21:36UTC+7	Minh4893IT	A - Love Story	GNU C++14	Accepted	15 ms	0 KB

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
    string line;
    GET(line);

    string comp = "codeforces";
    int result = 0;
    for (int i = 0; i < comp.size(); ++i)
        result += comp[i] != line[i];
    cout << result << endl;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    string line;
    GET(line);

    int t;
    ss stream(line);
    stream >> t;

    while (t--)
        solve();

    return 0;
}
