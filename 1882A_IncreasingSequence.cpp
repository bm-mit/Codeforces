//* 225097623	Sep/25/2023 21:39UTC+7	Minh4893IT	A - Increasing Sequence	GNU C++14	Accepted	15 ms	100 KB

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

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int curr = 1;
    for (int i = 0; i < n; ++i, ++curr)
        if (arr[i] == curr)
            ++curr;
    cout << curr - 1 << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
