//* 211036185	Jun/25/2023 20:57UTC+7	Minh4893IT	B - Wet Shark and Bishops	GNU C++17	Accepted	109 ms	300 KB

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
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()

void solve()
{
    int n;
    cin >> n;

    map<int, int> mainDiag, subDiag;
    while (n--)
    {
        int x, y;
        cin >> x >> y;

        ++mainDiag[x - y];
        ++subDiag[x + y];
    }

    int result = 0;
    for (auto p : mainDiag)
        result += p.second * (p.second - 1) / 2;
    for (auto p : subDiag)
        result += p.second * (p.second - 1) / 2;
    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
