//* 227566921	Oct/10/2023 22:59UTC+7	Minh4893IT	A - C+=	GNU C++14	Accepted	0 ms	0 KB

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

array<int, 46> fib;

void preprocess()
{
    fib[1] = 1;
    for (int i = 2; i < 46; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
}

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;

    if (a > b)
        swap(a, b);

    int low = 0;
    int high = 45;
    int res = high;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (fib[mid - 1] * a + fib[mid] * b > n)
        {
            res = mid - 1;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    cout << res << endl;
}

signed main()
{
    FAST_IO;

    preprocess();

    MULTI
    solve();

    return 0;
}
