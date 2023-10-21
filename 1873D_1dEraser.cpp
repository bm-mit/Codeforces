//* 229057670	Oct/21/2023 19:03UTC+7	Minh4893IT	D - 1D Eraser	GNU C++14	Accepted	15 ms	500 KB

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

    int result = 0;
    for (int i = 0; i < n; ++i)
        if (s[i] == 'B')
        {
            ++result;
            i += k - 1;
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
