//* 204128241	May/01/2023 17:33UTC+7	Minh4893IT	B - Prison Transfer	GNU C++17	Accepted	62 ms	4700 KB

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
    int n, t, c;
    cin >> n >> t >> c;

    vec<int> crimes(n);
    EACH(elem, crimes)
    {
        cin >> elem;
    }

    vec<int> idx;
    for (int i = 0; i < n; ++i)
        if (crimes[i] <= t)
            idx.push_back(i);

    int result = 0;
    for (int i = 0; i < idx.size(); ++i)
    {
        if (i + c - 1 < idx.size())
            if (idx[i] + c - 1 == idx[i + c - 1])
                ++result;
    }

    cout << result;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
