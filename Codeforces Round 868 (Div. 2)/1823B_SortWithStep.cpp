//* 203687361	Apr/27/2023 22:01UTC+7	Minh4893IT	1823B - Sort with Step	GNU C++17	Accepted	62 ms	1600 KB

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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n + 1);
    FORR(1, n + 1)
    {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 1; i <= n; ++i)
        count += arr[i] % k != i % k;

    if (!count)
        out << 0 << endl;
    else if (count == 2)
        out << 1 << endl;
    else
        out << -1 << endl;
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
