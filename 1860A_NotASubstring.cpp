//* 219532968	Aug/19/2023 14:28UTC+7	Minh4893IT	A - Not a Substring	GNU C++14	Accepted	31 ms	0 KB

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
    string s;
    cin >> s;

    if (s == "()")
    {
        cout << "NO" << endl;
        return;
    }

    int n = s.size();
    s.erase(unique(s.begin(), s.end()), s.end());

    cout << "YES" << endl;
    if (s == "()" || s == "(" || s == ")")
    {
        for (int i = 0; i < n; ++i)
            cout << "()";
        cout << endl;
    }
    else
    {
        for (int i = 0; i < n; ++i)
            cout << '(';
        for (int i = 0; i < n; ++i)
            cout << ')';
        cout << endl;
    }
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
