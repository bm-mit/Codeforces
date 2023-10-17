//* 228490793	Oct/17/2023 11:16UTC+7	Minh4893IT	C - Two Brackets	GNU C++14	Accepted	30 ms	600 KB

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

    map<char, int> count;
    int result = 0;
    for (auto c : s)
    {
        ++count[c];
        if (c == ')')
        {
            if (count['('])
            {
                --count['('];
                ++result;
            }
        }
        else if (c == ']')
            if (count['['])
            {
                --count['['];
                ++result;
            }
    }

    cout << result << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
