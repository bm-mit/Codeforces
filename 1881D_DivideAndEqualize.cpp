//* 228186589	Oct/14/2023 21:58UTC+7	Minh4893IT	D - Divide and Equalize	GNU C++14	Accepted	46 ms	8500 KB

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
array<int, 10005> arr;

array<int, 1000005> primeDiv;

void preprocess()
{
    int n = 1000000;
    for (int i = 2; i * i <= n; ++i)
        if (!primeDiv[i])
            for (int j = i; j <= n; j += i)
                primeDiv[j] = i;
    for (int i = 0; i <= n; ++i)
        if (!primeDiv[i])
            primeDiv[i] = i;
}

void factorize(int x, map<int, int> &countPrimeDiv)
{
    while (x > 1)
        ++countPrimeDiv[primeDiv[x]], x /= primeDiv[x];
}

void solve()
{
    cin >> n;

    map<int, int> countPrimeDiv;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;

        factorize(val, countPrimeDiv);
    }

    for (auto p : countPrimeDiv)
        if (p.second % n)
        {
            cout << "NO" << endl;
            return;
        }

    cout << "YES" << endl;
}

signed main()
{
    FAST_IO;

    preprocess();

    MULTI
    solve();

    return 0;
}
