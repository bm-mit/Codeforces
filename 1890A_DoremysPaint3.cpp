//* 230478976	Oct/30/2023 17:18UTC+7	Minh4893IT	A - Doremy's Paint 3	GNU C++14	Accepted	0 ms	100 KB

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
    int n;
    cin >> n;

    map<int, int> count;
    for (int i = 0; i < n; ++i) 
    {
        int val;
        cin >> val;

        ++count[val];
    }

    cout << IF(count.size() <= 2 && abs((*count.begin()).second - (*count.rbegin()).second) <= 1, "YES", "NO") << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
