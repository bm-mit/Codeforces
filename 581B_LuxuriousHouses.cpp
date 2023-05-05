//* 204529862	May/05/2023 13:56UTC+7	Minh4893IT	B - Luxurious Houses	GNU C++14	Accepted	93 ms	4900 KB

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

    array<int, 100005> arr;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int max = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        if (max > arr[i])
            arr[i] = max - arr[i] + 1;
        else if (arr[i] == max)
            arr[i] = 1;
        else
        {
            max = arr[i];
            arr[i] = 0;
        }
    }

    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
