//* 204141587	May/01/2023 20:52UTC+7	Minh4893IT	B - A and B and Compilation Errors	GNU C++17	Accepted	155 ms	11100 KB

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

    umap<int, int> err1;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        ++err1[temp];
    }

    umap<int, int> err2;
    for (int i = 1; i < n; ++i)
    {
        int temp;
        cin >> temp;
        ++err2[temp];
    }

    umap<int, int> err3;
    for (int i = 2; i < n; ++i)
    {
        int temp;
        cin >> temp;
        ++err3[temp];
    }

    for (auto p : err1)
    {
        if (p.second > err2[p.first])
        {
            cout << p.first << endl;
            break;
        }
    }

    for (auto p : err2)
    {
        if (p.second > err3[p.first])
        {
            cout << p.first << endl;
            break;
        }
    }
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
