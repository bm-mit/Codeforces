//* 224786164	Sep/24/2023 00:24UTC+7	Minh4893IT	D - Dima and Lisa	GNU C++14	Accepted	15 ms	0 KB

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

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

int randint(int l, int r)
{
    return uniform_int_distribution<int>(l, r)(rng);
}

int expo(int a, int b, int mod)
{
    if (!b)
        return 1;

    int t = expo(a, b / 2, mod);
    if (b % 2)
        return t * t % mod * a % mod;
    return t * t % mod;
}

bool isPrime(int p)
{
    if (p == 2 || p == 3 || p == 5)
        return true;
    if (p < 7)
        return false;

    for (int i = 20; i--;)
    {
        int a = randint(2, p - 1);
        if (expo(a, p - 1, p) != 1)
            return false;
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << 1 << endl
             << n;
        return;
    }

    cout << 3 << endl;
    cout << 3 << ' ';
    int i = 2;
    while (++i)
    {
        if (isPrime(i) && isPrime(n - i - 3))
        {
            cout << i << ' ' << n - i - 3 << endl;
            return;
        }
    }
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
