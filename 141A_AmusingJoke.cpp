//* 216665410	Aug/01/2023 13:18UTC+7	Minh4893IT	A - Amusing Joke	GNU C++14	Accepted	30 ms	0 KB

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
    vector<int> count1(26), count2(26);
    string s;
    cin >> s;

    for (auto c : s)
        ++count1[c - 'A'];

    cin >> s;
    for (auto c : s)
        ++count1[c - 'A'];

    cin >> s;
    for (auto c : s)
        ++count2[c - 'A'];

    cout << IF(count1 == count2, "YES", "NO");
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
