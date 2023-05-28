//* 207539368	May/28/2023 14:09UTC+7	Minh4893IT	B - Comparison String	GNU C++17	Accepted	15 ms	0 KB

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
    int curr = 1;
    int result = 1;

    string s;
    cin >> s >> s;

    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] != s[i - 1])
            curr = 1;
        else
            ++curr;
        result = max(result, curr);
    }
    cout << result + 1 << endl;
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
