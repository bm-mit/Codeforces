//* 205492789	May/12/2023 10:17UTC+7	Minh4893IT	B - Settlers' Training	GNU C++14	Accepted	30 ms	100 KB

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
    int n, k;
    cin >> n >> k;
    map<int, int> count;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        ++count[temp];
    }

    int coin = 0;
    while (count[k] < n)
    {
        for (int i = k - 1; i >= 1; --i)
        {
            if (count[i])
            {
                ++count[i + 1];
                --count[i];
            }
        }
        ++coin;
    }
    cout << coin;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
