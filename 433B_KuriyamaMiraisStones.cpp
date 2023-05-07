//* 204946789	May/07/2023 15:44UTC+7	Minh4893IT	B - Kuriyama Mirai's Stones	GNU C++14	Accepted	405 ms	1600 KB

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

    array<int, 100005> v, u;
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
        u[i] = v[i];
    }

    sort(u.begin() + 1, u.begin() + n + 1);

    for (int i = 1; i <= n; ++i)
    {
        v[i] += v[i - 1];
        u[i] += u[i - 1];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r, type;
        cin >> type >> l >> r;

        if (type - 1)
            cout << u[r] - u[l - 1] << endl;
        else
            cout << v[r] - v[l - 1] << endl;
    }
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
