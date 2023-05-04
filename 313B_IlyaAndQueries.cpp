//* 204469429	May/04/2023 21:55UTC+7	Minh4893IT	B - Ilya and Queries	GNU C++14	Accepted	716 ms	1100 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define iss istringstream
#define oss ostringstream
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
    array<int, 100005> prefSum;
    string s;
    GET(s);

    int n = s.length();

    s = ' ' + s;
    for (int i = 1; i < n; ++i)
    {
        prefSum[i] = prefSum[i - 1] + (s[i] == s[i + 1]);
    }
    prefSum[n] = prefSum[n - 1];

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << prefSum[r - 1] - prefSum[l - 1] << endl;
    }
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
