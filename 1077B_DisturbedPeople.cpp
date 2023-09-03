//* 221648418	Sep/03/2023 14:51UTC+7	Minh4893IT	B - Disturbed People	GNU C++14	Accepted	15 ms	0 KB

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

    int result = 0;
    for (int i = 1; i < n - 1; ++i)
        if (!arr[i] && arr[i - 1] && arr[i + 1])
            ++result, arr[i - 1] = arr[i + 1] = 0;
    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}