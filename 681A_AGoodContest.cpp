//* 203512017	Apr/26/2023 11:27UTC+7	Minh4893IT	681A - A Good Contest	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

using oint = int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define s string

#define in cin
#define out cout

#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define FORIR(i, a, n) for (int i = a; i < n; i++)
#define FORI(i, n) FORIR(i, 0, n)
#define FORR(a, n) FORIR(i, a, n)
#define FOR(n) FORIR(i, 0, n)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
#define FILE(name, inp, out) freopen(name + inp, "r", stdin), freopen(name + out, "w", stdout)

bool ans = false;

void solve()
{
    s line;
    getline(in, line);

    ss stream(line);

    s name;
    int bPoint, aPoint;
    stream >> name >> bPoint >> aPoint;

    if (bPoint >= 2400 && aPoint > bPoint)
        ans = true;
}

oint main()
{
    ios_base::sync_with_stdio(false);
    in.tie();

    int t;
    s line;
    getline(in, line);

    ss stream(line);
    stream >> t;

    FOR(t)
        solve();
    
    out << IF(ans, "YES", "NO");

    return 0;
}