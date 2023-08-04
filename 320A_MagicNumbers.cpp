//* 217134664	Aug/04/2023 21:54UTC+7	Minh4893IT	A - Magic Numbers	GNU C++14	Accepted	30 ms	0 KB

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

bool solve()
{
    string s;
    cin >> s;

    if (s.front() == '4')
        return bool(cout << "NO");

    for (auto c : s)
        if (c != '1' && c != '4')
            return bool(cout << "NO");

    return bool(cout << IF(s.find("444") != string::npos, "NO", "YES"));
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
