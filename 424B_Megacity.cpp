//* 204324846	May/03/2023 17:44UTC+7	Minh4893IT	B - Megacity	GNU C++14	Accepted	15 ms	0 KB

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

struct Point
{
    int x, y, population;
};

bool comp(Point a, Point b)
{
    int distA = a.x * a.x + a.y * a.y;
    int distB = b.x * b.x + b.y * b.y;
    if (distA == distB)
        return a.population > b.population;
    return distA < distB;
}

void solve()
{
    int n, s;
    in >> n >> s;

    array<Point, 1005> locations;
    for (int i = 0; i < n; ++i)
        cin >> locations[i].x >> locations[i].y >> locations[i].population;

    sort(locations.begin(), locations.begin() + n, comp);

    for (int i = 0; i < n; ++i)
    {
        s += locations[i].population;
        if (s >= 1000000)
        {
            int dist = locations[i].x * locations[i].x + locations[i].y * locations[i].y;
            printf("%.7f", sqrt(dist));
            return;
        }
    }

    cout << -1;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
