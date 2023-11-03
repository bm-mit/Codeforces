//* 231073896	Nov/03/2023 13:38UTC+7	Minh4893IT	B - Deja Vu	GNU C++14	Accepted	249 ms	900 KB

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
    int n, q;
    cin >>n >> q;

    array<int, 100005> arr;
    vector<int> x;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < q; ++i)
    {
        int val;
        cin >> val;

        if (x.empty() || x.back() > val)
            x.push_back(val);
    }

    for (auto elem : x)
        for (int i = 0; i < n; ++i)
            if (arr[i] % (1 << elem) == 0)
                arr[i] += 1 << (elem - 1);
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
