//* 224638528	Sep/22/2023 22:59UTC+7	Minh4893IT	E - Building an Aquarium	GNU C++14	Accepted	93 ms	1600 KB

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

int n, m;
array<int, 200000> arr;

bool check(int size)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
        if ((sum += max(0ll, size - arr[i])) > m)
            return false;

    return true;
}

void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int low = 0;
    int high = LLMAX;
    int res = low;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (check(mid))
        {
            res = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    cout << res << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
