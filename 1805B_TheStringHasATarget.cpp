//* 209951094	Jun/17/2023 17:42UTC+7	Minh4893IT	B - The String Has a Target	GNU C++17	Accepted	31 ms	300 KB

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
    string s;
    cin >> s >> s;

    int minIdx = 0;
    for (int i = 1; i < s.size(); ++i)
        if (s[i] <= s[minIdx])
            minIdx = i;

    cout << s[minIdx];
    for (int i = 0; i < s.size(); ++i)
        if (i != minIdx)
            cout << s[i];
    cout << endl;
}

signed main()
{
    FAST_IO;

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}