//* 205337210	May/10/2023 21:08UTC+7	Minh4893IT	B - George and Round	GNU C++14	Accepted	15 ms	0 KB

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
    int n, m;
    cin >> n >> m;

    array<int, 3005> arr1, arr2;
    for (int i = 0; i < n; ++i)
        cin >> arr1[i];
    for (int i = 0; i < m; ++i)
        cin >> arr2[i];

    int count = 0;
    int j = 0;

    for (int i = 0; i < n; ++i)
        while (j < m)
        {
            if (arr2[j] >= arr1[i])
            {
                ++count;
                ++i;
            }
            ++j;
        }

    cout << max(0ll, n - count);
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
