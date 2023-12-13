//8 237067315	Dec/13/2023 22:48UTC+7	Minh4893IT	B - Collecting Game	GNU C++14	Accepted	358 ms	2400 KB

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

int n;
array<pair<int, int>, 100005> arr;
array<int, 100005> result;

void solve()
{
    result.fill(0);

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr.begin(), arr.begin() + n);

    if (n == 1)
        return void(cout << "0\n");

    int sum = 0;
    result[arr[n - 1].second] = n - 1;
    for (int i = 0; i < n - 1; ++i)
    {
        sum += arr[i].first;
        if (sum < arr[i + 1].first)
            result[arr[i].second] = i;
    }

    for (int i = 1; i < n; ++i)
        if (result[arr[i].second])
        {
            int j = i - 1;
            while (j >= 0 && !result[arr[j].second])
                result[arr[j--].second] = result[arr[i].second];
        }

    if (arr[0].first != arr[1].first)
        result[arr[0].second] = 0;

    for (int i = 0; i < n; ++i)
        cout << result[i] << ' ';
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
