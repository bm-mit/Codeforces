//* 221089434	Aug/30/2023 20:41UTC+7	Minh4893IT	B - Swap and Reverse	GNU C++14	Accepted	62 ms	400 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()
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

    if (k % 2 == 0)
    {
        sort(s.begin(), s.end());
        cout << s << endl;
        return;
    }

    string odd, even;
    for (int i = 0; i < n; ++i)
        if (i % 2)
            odd.push_back(s[i]);
        else
            even.push_back(s[i]);

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    string result;
    for (int i = 0; i < min(odd.size(), even.size()); ++i)
        cout << even[i] << odd[i];
    
    if (s.size() % 2)
        cout << even.back();
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
