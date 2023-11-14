//* 232781590	Nov/14/2023 23:51UTC+7	Minh4893IT	A - Sorting with Twos	GNU C++14	Accepted	62 ms	800 KB

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

    int last = 0;
    int pow = 1;
    while (last <= n)
    {

        if (!is_sorted(arr.begin() + last, arr.begin() + min(n, pow)))
        {
            cout << "NO" << endl;
            return;
        }

        last = pow;
        pow <<= 1;
    }

    cout << "YES" << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
