//* 221711852	Sep/03/2023 22:19UTC+7	Minh4893IT	C - ...And after happily lived ever they	GNU C++14	Accepted	15 ms	0 KB
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

#define swap(a, b) temp = a, a = b, b = temp;

void solve()
{
    int n;
    cin >> n;

    bool temp;
    bitset<6> bit(n);

    swap(bit[4], bit[0]);
    swap(bit[2], bit[3]);
    cout << bit.to_ullong();
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
