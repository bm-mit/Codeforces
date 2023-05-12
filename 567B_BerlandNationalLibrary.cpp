//* 205498985	May/12/2023 12:10UTC+7	Minh4893IT	B - Berland National Library	GNU C++14	Accepted	15 ms	100 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define vec vector
#define pq priority_queue
#define pb push_back
#define popb pop_back

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

    map<int, bool> logs;
    int capa = 0;
    int result = 0;

    for (int i = 0; i < n; ++i)
    {
        string stat;
        int id;
        cin >> stat >> id;
        if (stat == "-")
        {
            if (!logs[id])
                ++result;
            else
            {
                logs[id] = false;
                --capa;
            }
        }
        else
        {
            ++capa;
            logs[id] = true;
        }
        result = max(result, capa);
    }

    cout << result;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
