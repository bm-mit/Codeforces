//* 211002131	Jun/25/2023 15:05UTC+7	Minh4893IT	B - Hamming Distance Sum	GNU C++17	Accepted	30 ms	2700 KB

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
    string a, b;
    cin >> a >> b;

    a = ' ' + a;
    b = ' ' + b;

    vector<int> pref(b.size());
    for (int i = 1; i < b.size(); ++i)
        pref[i] = pref[i - 1] + b[i] - '0';

    int result = 0;
    int l = 0;
    int r = b.size() - a.size() + 1;
    for (int i = 1; i < a.size(); ++i)
    {
        int n = b.size() - 1;
        int val = a[i] - '0';

        if (!val)
            result += pref[r] - pref[l];
        else
            result += r - l - (pref[r] - pref[l]);
        ++r, ++l;
    }

    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
