//* 238036899	Dec/19/2023 23:34UTC+7	Minh4893IT	B - Swap and Delete	GNU C++14	Accepted	15 ms	500 KB

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
    string s;
    cin >> s;
    n = s.length();

    array<int, 2> count = {};
    for (auto c : s)
        ++count[c - '0'];

    for (int i = 0; i < n; ++i)
        if (!count['1' - s[i]])
            return void(cout << n - i << endl);
        else
            --count['1' - s[i]];

    cout << 0 << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
