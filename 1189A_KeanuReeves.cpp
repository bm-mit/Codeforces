//* 210533034	Jun/21/2023 17:26UTC+7	Minh4893IT	A - Keanu Reeves	GNU C++17	Accepted	15 ms	0 KB

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

    if (s.size() % 2)
    {
        cout << 1 << endl
             << s;
        return;
    }

    vector<int> freq(2);
    for (auto c : s)
        ++freq[c - '0'];
    
    if (freq[0] != freq[1])
    {
        cout << 1 << endl
             << s;
        return;
    }

    cout << 2 << endl;
    cout << s[0] << ' ' << s.substr(1, s.size() - 1);
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
