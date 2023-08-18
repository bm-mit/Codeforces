//* 219453635	Aug/18/2023 20:39UTC+7	Minh4893IT	B - Jeff and Periods	GNU C++14	Accepted	186 ms	10100 KB

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
    int n;
    cin >> n;

    map<int, vector<int>> index;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        index[val].push_back(i);
    }

    vector<pair<int, int>> result;

    for (auto elem : index)
    {
        vector<int> &arr = elem.second;
        bool res = true;
        for (int i = 2; i < arr.size(); ++i)
            if (arr[i] - arr[i - 1] != arr[i - 1] - arr[i - 2])
            {
                res = false;
                break;
            }

        if (res)
        {
            if (arr.size() == 1)
                result.push_back({elem.first, 0});
            else
                result.push_back({elem.first, arr[1] - arr[0]});
        }
    }

    cout << result.size() << endl;
    for (auto elem : result)
        cout << elem.first << ' ' << elem.second << endl;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
