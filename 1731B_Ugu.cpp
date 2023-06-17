//* 209923396	Jun/17/2023 12:29UTC+7	Minh4893IT	B - Ugu	GNU C++17	Accepted	31 ms	400 KB

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

    reverse(s.begin(), s.end());
    while (s.size() && s.back() == '0')
        s.pop_back();

    int result = 0;
    for (int i = 1; i < s.size(); ++i)
        result += s[i] != s[i - 1];
    cout << result << endl;
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
