//* 238953003	Dec/26/2023 19:35UTC+7	Minh4893IT	B - Erase First or Second Letter	GNU C++14	Accepted	31 ms	1500 KB

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

    cin >> n >> s;

    map<char, int> mark;
    int result = 0;
    for (int i = 0; i < n; ++i)
        if (!mark[s[i]])
            result += n - i, mark[s[i]] = true;
    cout << result << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
