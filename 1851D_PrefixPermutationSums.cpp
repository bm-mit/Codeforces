//* 215582269	Jul/25/2023 22:53UTC+7	Minh4893IT	D - Prefix Permutation Sums	GNU C++14	Accepted	187 ms	11100 KB

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
    cin >> n;

    vector<int> pref(n);
    for (int i = 1; i < pref.size(); ++i)
        cin >> pref[i];

    if (pref.back() > n * (n + 1) / 2)
    {
        cout << "NO" << endl;
        return;
    }
    else
        pref.push_back(n * (n + 1) / 2);

    map<int, bool> permappear;
    int outperm = 0;\
    for (int i = 1; i < pref.size(); ++i)
    {
        int val = pref[i] - pref[i - 1];
        if (val <= n && !permappear[val])
            permappear[val] = true;
        else
        {
            outperm = val;
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        if (!permappear[i])
            outperm -= i;
    }

    cout << IF(!outperm, "YES", "NO") << endl;
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
