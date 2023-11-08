//* 231931287	Nov/08/2023 18:59UTC+7	Minh4893IT	C - Fox and Box Accumulation	GNU C++14	Accepted	31 ms	0 KB

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

    array<int, 105> arr;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.begin() + n);

    vector<int> result = {1};
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] < result.back())
        {
            result.push_back(1);
            continue;
        }

        int low = 0;
        int high = result.size() - 1;
        int idx = high;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[i] >= result[mid])
            {
                idx = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }

        ++result[idx];
    }

    cout << result.size();
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
