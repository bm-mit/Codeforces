//* 234995841	Nov/30/2023 08:55UTC+7	Minh4893IT	B - Three Threadlets	GNU C++14	Accepted	31 ms	0 KB

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
    array<int, 3> arr;
    for (auto &elem : arr)
        cin >> elem;
    sort(arr.begin(), arr.end());

    cout << IF(arr[1] % arr[0] == 0 && arr[2] % arr[0] == 0 && arr[1] / arr[0] - 1 + arr[2] / arr[0] - 1 <= 3, "YES", "NO") << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
