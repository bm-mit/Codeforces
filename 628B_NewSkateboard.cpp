//* 226306783	Oct/02/2023 21:03UTC+7	Minh4893IT	B - New Skateboard	GNU C++14	Accepted	46 ms	1000 KB

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

    int result = (s.front() - '0') % 4 == 0;
    for (int i = 1; i < s.size(); ++i)
    {
        if ((s[i] - '0') % 4 == 0)
            ++result;
        
        int val = stoi(s.substr(i - 1, 2));
        if (val % 4 == 0)
            result += i;
    }

    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
