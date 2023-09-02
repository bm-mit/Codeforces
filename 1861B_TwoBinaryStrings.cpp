//* 221528334	Sep/02/2023 13:32UTC+7	Minh4893IT	B - Two Binary Strings	GNU C++14	Accepted	15 ms	300 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    string a, b;
    cin >> a >> b;

    int n = a.size();

    vector<pair<int, int>> idx;
    for (int i = 0; i < n; ++i)
        if (a[i] == b[i])
            idx.push_back({a[i], i});

    for (int i = 1; i < idx.size(); ++i)
        if (idx[i].first == '1' && idx[i - 1].first == '0' && idx[i].second == idx[i - 1].second + 1)
        {
            cout << "YES" << endl;
            return;
        }

    cout << "NO" << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
