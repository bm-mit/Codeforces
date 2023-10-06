//* 224882875	Sep/24/2023 21:40UTC+7	Minh4893IT	A - Rigged!	GNU C++14	Accepted	15 ms	0 KB

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

    vector<pair<int, int>> arr(1);
    cin >> arr[0].first >> arr[0].second;
    for (int i = 1; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;

        if (a >= arr[0].first)
            arr.push_back({a, b});
    }
    

    bool res = true;
    for (int i = 1; i < arr.size(); ++i)    
        if (arr[i].second >= arr[0].second)
            res = false;
    if (res)
        cout << arr[0].first << endl;
    else
        cout << -1 << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
