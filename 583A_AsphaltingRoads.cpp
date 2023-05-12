//* 205493441	May/12/2023 10:30UTC+7	Minh4893IT	A - Asphalting Roads	GNU C++14	Accepted	15 ms	100 KB

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

#define GET(var) getline(cin, var)

#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

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
    map<int, bool> asphaltedH, asphaltedV;
    vec<int> result;
    for (int i = 0; i < n * n; ++i)
    {
        int h, v;
        cin >> h >> v;

        if (!asphaltedH[h] && !asphaltedV[v])
        {
            result.push_back(i + 1);
            asphaltedH[h] = true, asphaltedV[v] = true;
        }
    }
    EACH(elem, result)
    cout << elem << ' ';
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
