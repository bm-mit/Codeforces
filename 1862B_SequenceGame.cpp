//* 220454125	Aug/26/2023 10:04UTC+7	Minh4893IT	B - Sequence Game	GNU C++14	Accepted	171 ms	7800 KB

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

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    vector<int> result = {arr.front()};
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] < result.back())
            result.push_back(arr[i]);
        result.push_back(arr[i]);
    }

    cout << result.size() << endl;
    for (auto elem : result)
        cout << elem << ' ';
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
