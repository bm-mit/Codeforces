//* 220029705	00:19:30	Minh4893IT	A - Integer Sequence Dividing	GNU C++14	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    int n;
    cin >> n;

    if (n % 2)
        cout << !(n % 2 && (n - 1) / 2 % 2);
    else
        cout << n / 2 % 2;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
