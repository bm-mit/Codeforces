//* 227686101	Oct/11/2023 20:37UTC+7	Minh4893IT	A - Cherry	GNU C++14	Accepted	109 ms	2400 KB

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
array<int, 300005> arr;

void solve()
{
    cin >> n;

    int result = 0;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 1; i < n; ++i)
        result = max(result, arr[i] * arr[i - 1]);
    cout << result << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
