//* 222471043	Sep/08/2023 21:24UTC+7	Minh4893IT	D - Plus Minus Permutation	GNU C++14	Accepted	15 ms	0 KB

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

int gcd(int a, int b)
{
    return IF(b, gcd(b, a % b), a);
}

int sum(int a)
{
    return a * (a + 1) / 2;
}

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    int l = x * y / gcd(x, y);
    int xMul = n / x - n / l;
    int yMul = n / y - n / l;

    cout << sum(n) - sum(n - xMul) - sum(yMul) << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
