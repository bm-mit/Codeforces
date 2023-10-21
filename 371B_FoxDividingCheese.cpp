//* 229078208	Oct/21/2023 21:31UTC+7	Minh4893IT	B - Fox Dividing Cheese	GNU C++14	Accepted	15 ms	0 KB

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
    int a, b;
    cin >> a >> b;

    map<int, int> count1, count2;

    array<int, 3> primes = {2, 3, 5};

    for (int i = 0; i < 3; ++i)
    {
        count1[primes[i]] = count2[primes[i]] = 0;
        while (a % primes[i] == 0)
        {
            ++count1[primes[i]];
            a /= primes[i];
        }

        while (b % primes[i] == 0)
        {
            ++count2[primes[i]];
            b /= primes[i];
        }
    }

    if (a != b)
    {
        cout << -1;
        return;
    }

    int result = 0;
    for (int i = 2; i >= 0; --i)
        result += abs(count2[primes[i]] - count1[primes[i]]);

    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
