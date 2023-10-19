//* 228813133	Oct/19/2023 21:14UTC+7	Minh4893IT	A - k-String	GNU C++14	Accepted	30 ms	100 KB

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

    map<char, int> count;
    for (auto c : s)
        ++count[c];

    string result;
    for (auto elem : count)
        if (elem.second % n != 0)
        {
            cout << -1;
            return;
        }
        else
            result += string(elem.second / n, elem.first);

    string temp = result;
    while (result.size() < s.size())  
        result += temp;
    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
