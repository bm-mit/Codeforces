//* 236303565	Dec/08/2023 15:21UTC+7	Minh4893IT	A - Halloumi Boxes	GNU C++14	Accepted	15 ms	0 KB

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
    int n, k;
    cin >> n >> k;

    array<int, 105> arr;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    if (k - 1)
    {
        cout << "YES" << endl;
        return;
    }

    cout << IF(is_sorted(arr.begin(), arr.begin() + n), "YES", "NO") << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
