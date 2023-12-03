//* 235597077	Dec/03/2023 23:21UTC+7	Minh4893IT	A - Cover in Water	GNU C++14	Accepted	15 ms	0 KB

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

    string s;
    cin >> s;

    for (int i = 1; i < n - 1; ++i)
        if (s[i - 1] == s[i] && s[i] == s[i + 1] && s[i] == '.')
        {
            cout << 2 << endl;
            return;
        }

    int count = 0;
    for (auto c : s)
        count += c == '.';
    cout << count << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
