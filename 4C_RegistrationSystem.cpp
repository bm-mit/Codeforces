//* 235416579	Dec/02/2023 23:46UTC+7	Minh4893IT	C - Registration System	GNU C++14	Accepted	342 ms	900 KB

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

    map<string, int> count;
    while (n--)
    {
        string s;
        cin >> s;

        if (count[s])
        {
            cout << s << count[s] << endl;
            count[s]++;
        }
        else
        {
            cout << "OK" << endl;
            count[s] = 1;
        }
    }
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
