//* 233591661	Nov/20/2023 23:02UTC+7	Minh4893IT	A - Milica and String	GNU C++14	Accepted	31 ms	0 KB

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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int count = 0;
    for (auto c : s)
        count += c == 'B';

    if (k == count)
    {
        cout << 0 << endl;
        return;
    }

    cout << 1 << endl;

    if (count > k)
        for (int i = 0; i < n; ++i)
            if (s[i] == 'B')
                if (--count == k)
                {
                    cout << i + 1 << " A" << endl;
                    return;
                }

    for (int i = 0; i < n; ++i)
        if (s[i] == 'A')
            if (++count == k)
                cout << i + 1 << " B" << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
