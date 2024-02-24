//* 248074104	Feb/24/2024 16:07UTC+7	Minh4893IT	E - Vlad and an Odd Ordering	GNU C++17	Accepted	77 ms	0 KB


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

int calc(int n, int k)
{
    if (k <= (n + 1) / 2)
        return k * 2 - 1;
    return 2 * calc(n / 2, k - (n + 1) / 2);
}

void solve()
{
    int n, k;
    cin >> n >> k;

    cout << calc(n, k) << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
