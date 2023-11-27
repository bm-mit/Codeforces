//* 234570669	Nov/27/2023 17:43UTC+7	Minh4893IT	B - 250 Thousand Tons of TNT	GNU C++14	Accepted	171 ms	1300 KB

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

    int ma = 0;
    int mi = LLMAX;
    array<int, 150005> arr;
    for (int i = 0; i < n; ++i)
        cin >> arr[i], ma = max(ma, arr[i]), mi = min(mi, arr[i]);

    vector<int> divisors;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i != n / i)
                divisors.push_back(n / i);
        }

    int result = ma - mi;
    for (auto div : divisors)
    {
        int sum = 0;
        int ma = 0;
        int mi = LLMAX;
        for (int i = 0; i < n; ++i)
        {
            if (i % div == 0 && i)
            {
                ma = max(ma, sum);
                mi = min(mi, sum);
                sum = 0;
            }

            sum += arr[i];
        }

        ma = max(ma, sum);
        mi = min(mi, sum);

        result = max(result, ma - mi);
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
