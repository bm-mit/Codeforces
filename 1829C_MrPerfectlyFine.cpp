//* 205131565	May/08/2023 21:53UTC+7	Minh4893IT	C - Mr. Perfectly Fine	GNU C++14	Accepted	93 ms	3200 KB

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
    int n;
    cin >> n;
    pq<int, vec<int>, greater<int>> skill1, skill2, both;
    for (int i = 0; i < n; ++i)
    {
        int time, skill;
        cin >> time >> skill;
        if (skill == 10 || skill == 11)
            skill1.push(time);
        if (skill == 11 || skill == 1)
            skill2.push(time);
        if (skill == 11)
            both.push(time);
    }

    if (skill1.size() && skill2.size())
        cout << min(skill1.top() + skill2.top(), IF(both.size(), both.top(), LLMAX)) << endl;
    else
        cout << -1 << endl;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
