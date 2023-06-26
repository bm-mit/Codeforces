//* 211138243	Jun/26/2023 20:21UTC+7	Minh4893IT	D - Distinct Split	GNU C++17	Accepted	202 ms	500 KB

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
    string s;

    cin >> n >> s;

    map<char, int> count;
    for (auto c : s)
        ++count[c];

    int result = 0;
    map<char, int> curr;
    for (auto c : s)
    {
        ++curr[c];

        int res = 0;
        for (char chr = 'a'; chr <= 'z'; ++chr)
            res += (curr[chr] > 0) + (count[chr] - curr[chr] > 0);

        result = max(result, res);
    }

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
