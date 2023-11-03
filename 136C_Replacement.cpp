//* 231057286	Nov/03/2023 10:14UTC+7	Minh4893IT	C - Replacement	GNU C++14	Accepted	186 ms	800 KB

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

    array<int, 100005> arr;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.begin() + n);

    if (arr[n - 1] == 1)
        arr[n - 1] = 2;
    else
        arr[n - 1] = 1;
    sort(arr.begin(), arr.begin() + n);

    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
