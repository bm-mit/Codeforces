//* 209286513	Jun/11/2023 20:15UTC+7	Minh4893IT	B - Count the Number of Pairs	GNU C++17	Accepted	93 ms	500 KB

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
    int k;
    string s;
    cin >> k >> k >> s;

    map<char, int> count;
    for (auto c : s)
        ++count[c];

    int result = 0;
    for (char c = 'a'; c <= 'z'; ++c)
    {
        char u = toupper(c);

        while (abs(count[u] - count[c]) >= 2 && k)
        {
            if (count[u] < count[c])
                swap(count[u], count[c]);
            ++count[c];
            --count[u];
            --k;
        }
        result += min(count[u], count[c]);
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
