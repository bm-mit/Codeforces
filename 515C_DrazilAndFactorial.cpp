//* 229005561	Oct/21/2023 11:43UTC+7	Minh4893IT	C - Drazil and Factorial	GNU C++14	Accepted	15 ms	0 KB

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

array<string, 10> m = {
    "",
    "",
    "2",
    "3",
    "322",
    "5",
    "53",
    "7",
    "7222",
    "7332"};

void solve()
{
    int n;
    cin >> n;

    string result;
    for (int i = 0; i < n; ++i)
    {
        char c;
        cin >> c;

        result += m[c - '0'];
    }

    sort(result.rbegin(), result.rend());
    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
