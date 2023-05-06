//* 204712090	May/06/2023 15:36UTC+7	Minh4893IT	B - Misha and Changing Handles	GNU C++14	Accepted	30 ms	400 KB

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
    int q;
    cin >> q;
    map<string, string> m;
    for (int i = 0; i < q; ++i)
    {
        string oldname, newname;
        cin >> oldname >> newname;

        if (!m[oldname].empty())
        {
            string first = m[oldname];
            m.erase(oldname);
            m[newname] = first;
        }
        else
            m[newname] = oldname;
    }

    vector<pair<string, string>> result;
    EACH(p, m)
    {
        if (p.second.size())
            result.push_back(pair<string, string>(p.second, p.first));
    }
    cout << result.size() << endl;

    EACH(elem, result)
    {
        cout << elem.first << ' ' << elem.second << endl;
    }
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
