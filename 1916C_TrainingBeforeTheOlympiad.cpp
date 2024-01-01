//* 239904777	Jan/01/2024 23:00UTC+7	Minh4893IT	C - Training Before the Olympiad	GNU C++14	Accepted	93 ms	0 KB

// My first 2024 problem

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

    int odd = 0;
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;

        sum += val;
        odd += val % 2;

        if (!i)
            cout << val << ' ';
        else
            cout << sum - odd / 3 - (odd % 3 == 1) << ' ';
    }

    cout << endl;
}

signed main()
{
    FAST_IO;

    // cout << calc(4, 0);

    MULTI
    solve();

    return 0;
}
