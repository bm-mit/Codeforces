//* 226604919	Oct/04/2023 21:42UTC+7	Minh4893IT	F - Consecutive Subsequence	GNU C++14	Accepted	295 ms	17500 KB

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
    array<int, 200005> arr;

    map<int, int> len;
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];

        len[arr[i]] = len[arr[i] - 1] + 1;
    }

    int longest = 0;
    for (auto p : len)
        if (p.second > len[longest])
            longest = p.first;

    vector<int> result;

    for (int i = n; i >= 1; --i)
        if (arr[i] == longest)
        {
            result.push_back(i);
            --longest;
        }

    cout << result.size() << endl;
    for (auto it = result.rbegin(); it != result.rend(); ++it)
        cout << *it << ' ';
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
