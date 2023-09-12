//* 223047924	Sep/12/2023 14:19UTC+7	Minh4893IT	A - Make It Zero	GNU C++14	Accepted	15 ms	0 KB

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

    cout << 2 + 2 * (n % 2) << endl;
    if (n % 2)
    {
        cout << n - 1 << ' ' << n << endl;
        cout << n - 1 << ' ' << n << endl;
    }

    cout << 1 << ' ' << n - (n % 2) << endl;
    cout << 1 << ' ' << n - (n % 2) << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
