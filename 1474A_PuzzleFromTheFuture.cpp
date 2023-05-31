//* 207974585	May/31/2023 21:45UTC+7	Minh4893IT	A - Puzzle From the Future	GNU C++17	Accepted	15 ms	400 KB

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

    string res = "1";
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] + 1 != s[i - 1] + res[i - 1] - '0')
            res += '1';
        else
            res += '0';
    }
    cout << res << endl;
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
