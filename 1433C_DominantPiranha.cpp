//* 226301551	Oct/02/2023 20:24UTC+7	Minh4893IT	C - Dominant Piranha	GNU C++14	Accepted	109 ms	2400 KB

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
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int ma = *max_element(arr.begin(), arr.end());

    for (int i = 1; i < n - 1; ++i)
        if (arr[i] == ma && (arr[i - 1] < arr[i] || arr[i] > arr[i + 1]))
        {
            cout << i + 1 << endl;
            return;
        }

    if (arr[n - 1] == ma && arr[n - 1] > arr[n - 2])
    {
        cout << n << endl;
        return;
    }

    if (arr[0] == ma && arr[0] > arr[1])
    {
        cout << 1 << endl;
        return;
    }

    cout << -1 << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
