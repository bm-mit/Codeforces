//* 217395983	Aug/06/2023 09:24UTC+7	Minh4893IT	B - Appleman and Card Game	GNU C++14	Accepted	15 ms	300 KB

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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<pair<char, int>> count(26);
    for (int i = 0; i < 26; ++i)
        count[i].first = 'A' + i;
    for (auto c : s)
        ++count[c - 'A'].second;

    sort(count.begin(), count.end(), [](pair<char, int> a, pair<char, int> b)
         { return a.second > b.second; });
    
    int result = 0;
    for (int i = 0; i < 26 && k; ++i)
    {
        int cnt = min(count[i].second, k);
        k -= cnt;
        result += cnt * cnt;
    }

    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
