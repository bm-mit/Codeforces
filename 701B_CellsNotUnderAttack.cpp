//* 205796212	May/14/2023 14:03UTC+7	Minh4893IT	B - Cells Not Under Attack	GNU C++14	Accepted	436 ms	6400 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define pq priority_queue
#define endl "\n"

#define LLMAX INT64_MAX
#define GET(var) getline(cin, var)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
void OFILE(const char * finp, const char * fout)
{
    freopen(finp, "r", stdin), freopen(fout, "w", stdout);
}

void solve()
{
    int n, m;
    cin >> n >> m;

    set<int> rows, cols;
    vector<int> result;
    while (m--)
    {
        int row, col;
        cin >> row >> col;

        rows.insert(row);
        cols.insert(col);
        int rsize = rows.size();
        int csize = cols.size();

        cout << n * n - (rsize * n + csize * n - rsize * csize) << ' ';
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
