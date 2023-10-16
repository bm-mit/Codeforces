//* 228460100	Oct/17/2023 01:25UTC+7	Minh4893IT	A - Space Navigation	GNU C++14	Accepted	15 ms	300 KB

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
    int x, y;
    cin >> x >> y;

    string s;
    cin >> s;

    map<char, int> count;
    for (auto c : s)
        ++count[c];

    if ((x > 0 || y > 0) && (x > count['R'] || y > count['U']))
    {
        cout << "NO" << endl;
        return;
    }

    if ((x < 0 || y < 0) && (-x > count['L'] || -y > count['D']))
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
