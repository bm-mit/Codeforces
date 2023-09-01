//* 221457849	Sep/01/2023 21:25UTC+7	Minh4893IT	A - Channel	GNU C++14	Accepted	15 ms	0 KB

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
    int n, a, q;
    cin >> n >> a >> q;

    string s;
    cin >> s;

    if (a == n)
    {
        cout << "YES" << endl;
        return;
    }

    int plus = a;
    for (auto c : s)
        plus += c == '+';

    if (plus < n)
    {
        cout << "NO" << endl;
        return;
    }

    int curr = a;
    for (auto c : s)
    {

        IF(c == '+', ++curr, --curr);

        if (curr == n)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "MAYBE" << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
