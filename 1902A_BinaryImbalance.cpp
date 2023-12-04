//* 235688007	Dec/04/2023 16:49UTC+7	Minh4893IT	A - Binary Imbalance	GNU C++14	Accepted	0 ms	0 KB

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

    s.erase(unique(s.begin(), s.end()), s.end());

    cout << IF(s != "1", "YES", "NO") << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
