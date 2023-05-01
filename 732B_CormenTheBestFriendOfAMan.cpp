//* 204127472	May/01/2023 17:22UTC+7	Minh4893IT	B - Cormen --- The Best Friend Of a Man	GNU C++17	Accepted	15 ms	0 KB

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

    vec<int> walks(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> walks[i];

    vec<int> walks1(walks);
    int need1 = 0;
    for (int i = 2; i <= n; ++i)
    {
        if (walks1[i] + walks1[i - 1] < k)
        {
            need1 += k - walks1[i] - walks1[i - 1];
            walks1[i] += k - walks1[i] - walks1[i - 1];
        }
    }

    cout << need1 << endl;
    for (int i = 1; i <= n; ++i)
        cout << walks1[i] << ' ';
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
