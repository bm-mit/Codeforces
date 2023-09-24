//* 224853449	Sep/24/2023 17:55UTC+7	Minh4893IT	B - Kolya and Tanya	GNU C++14	Accepted	15 ms	0 KB

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

const int MOD = 1000000007;
int expo(int a, int b)
{
    if (!b)
        return 1;
    int t = expo(a, b / 2);
    if (b % 2)
        return t * t % MOD * a % MOD;
    return t * t % MOD;
}

void solve()
{
    int n;
    cin >> n;

    cout << ((expo(27, n) - expo(7, n)) % MOD + MOD) % MOD;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
