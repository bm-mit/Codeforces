//* 232408853	Nov/11/2023 23:30UTC+7	Minh4893IT	A - Cards with Numbers	GNU C++14	Accepted	296 ms	12900 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    int n;
    cin >> n;

    map<int, vector<int>> idx;
    for (int i = 1; i <= 2 * n; ++i)
    {
        int val;
        cin >> val;

        idx[val].push_back(i);
    }

    for (auto &elem : idx)
        if (elem.second.size() & 1)
        {
            cout << -1;
            return;
        }

    for (auto elem : idx)
        for (int i = 0; i < elem.second.size(); i += 2)
            cout << elem.second[i] << ' ' << elem.second[i+1] << endl;
}

signed main()
{
    FAST_IO;

    OFILE("input.txt", "output.txt");

    // MULTI
    solve();

    return 0;
}
