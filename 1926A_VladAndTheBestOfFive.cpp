//* 247817077	Feb/23/2024 09:49UTC+7	Minh4893IT#	A - Vlad and the Best of Five	GNU C++17	Accepted	0 ms	0 KB

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
    string s;
    cin >> s;

    cout << IF(count(s.begin(), s.end(), 'A') >= 3, 'A', 'B') << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
