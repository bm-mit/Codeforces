//* 251366865	Mar/15/2024 15:34UTC+7	Minh4893IT	A - Rudolf and the Ticket	C++17 (GCC 7-32)	Accepted	15 ms	0 KB

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
    int n, m, k;
    cin >> n >> m >> k;

    array<int, 105> b, c;
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    for (int i = 0; i < m; ++i)
        cin >> c[i];
    sort(c.begin(), c.begin() + m);

    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        int low = 0;
        int high = m - 1;
        int res = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (b[i] + c[mid] <= k)
                low = mid + 1, res = mid;
            else
                high = mid - 1;
        }

        result += res + 1;
    }

    cout << result << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
