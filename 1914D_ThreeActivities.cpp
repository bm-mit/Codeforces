//* 238717716	Dec/24/2023 22:43UTC+7	Minh4893IT	D - Three Activities	GNU C++14	Accepted	124 ms	5700 KB

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

array<array<pair<int, int>, 100005>, 3> arr;

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j].first, arr[i][j].second = j;
        sort(arr[i].begin(), arr[i].begin() + n, greater<pair<int, int>>());
    }

    int result = 0;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            for (int k = 0; k < 3; ++k)
                if (arr[0][i].second != arr[1][j].second && arr[1][j].second != arr[2][k].second && arr[0][i].second != arr[2][k].second)
                    result = max(result, arr[0][i].first + arr[1][j].first + arr[2][k].first);
    cout << result << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
