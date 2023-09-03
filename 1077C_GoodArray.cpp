//* 221650811	Sep/03/2023 15:15UTC+7	Minh4893IT	C - Good Array	GNU C++14	Accepted	93 ms	16900 KB

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

    int sum = 0;
    int ma1 = 0, ma2;
    vector<vector<int>> idx(1000005);
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        sum += val;
        idx[val].push_back(i + 1);

        if (val >= ma1)
            ma2 = ma1, ma1 = val;
        else if (val > ma2)
            ma2 = val;
    }

    vector<int> result;
    for (int i = 1000000; i >= 1; --i)
    {
        if (i == ma1)
        {
            if (sum - ma1 - ma2 == ma2)
                copy(idx[i].begin(), idx[i].end(), back_inserter(result));
            continue;
        }

        if (idx[i].size() && sum - i - ma1 == ma1)
            copy(idx[i].begin(), idx[i].end(), back_inserter(result));
    }

    cout << result.size() << endl;
    for (auto elem : result)
        cout << elem << ' ';
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
