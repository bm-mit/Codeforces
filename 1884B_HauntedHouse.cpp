//* 229450546	Oct/23/2023 22:47UTC+7	Minh4893IT	B - Haunted House	GNU C++14	Accepted	62 ms	2500 KB

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

    vector<int> idx;
    for (int i = 0; i < n; ++i)
        if (s[i] == '0')
            idx.push_back(i);
    reverse(idx.begin(), idx.end());

    vector<int> result(n, -1);
    if (idx.size())
        result[0] = n - 1 - idx[0];
    for (int i = 1; i < idx.size(); ++i)
        result[i] = result[i - 1] + (n - i - 1) - idx[i];
    for (int i = 0; i < n; ++i)
        cout << result[i] << ' ';
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
