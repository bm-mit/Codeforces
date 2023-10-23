//* 229363679	Oct/23/2023 10:21UTC+7	Minh4893IT	A - Simple Design	GNU C++14	Accepted	15 ms	0 KB

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

int sum(int n)
{
    int result = 0;
    while (n)
        result += n % 10, n /= 10;
    return result;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    while (sum(n) % k)
        ++n;
    cout << n << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
