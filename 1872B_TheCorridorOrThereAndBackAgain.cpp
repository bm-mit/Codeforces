//* 222255009	Sep/07/2023 22:05UTC+7	Minh4893IT	B - The Corridor or There and Back Again	GNU C++14	Accepted	46 ms	0 KB

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
vector<int> traps;

bool check(int k)
{
    for (int i = 1; i <= k; ++i)
        if (traps[i] && traps[i] < 2 * (k - i) + 1)
        {
            // cerr << i << ' ' << k << endl;
            return false;
        }
    return true;
}

void solve()
{
    cin >> n;
    traps.assign(500, 0);

    for (int i = 0; i < n; ++i)
    {
        int s, d;
        cin >> d >> s;

        if (!traps[d] || traps[d] > s)
            traps[d] = s;
    }

    int low = 1;
    int high = 500;
    int result = low;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (check(mid))
        {
            low = mid + 1;
            result = mid;
        }
        else
            high = mid - 1;
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
