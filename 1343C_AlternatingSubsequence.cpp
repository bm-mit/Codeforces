//* 221263386	Aug/31/2023 19:40UTC+7	Minh4893IT	C - Alternating Subsequence	GNU C++14	Accepted	93 ms	3100 KB

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
    int n;
    cin >> n;

    vector<int> arr(1);
    cin >> arr.front();

    while (--n)
    {
        int val;
        cin >> val;

        if (val / abs(val) != arr.back() / abs(arr.back()))
            arr.push_back(val);
        else if (val > arr.back())
            arr.pop_back(), arr.push_back(val);
    }

    cout << accumulate(arr.begin(), arr.end(), 0ll) << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
