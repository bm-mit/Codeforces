//* 221815366	Sep/04/2023 19:47UTC+7	Minh4893IT	D - Strong Vertices	GNU C++14	Accepted	171 ms	6200 KB

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

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    vector<int> result;
    int ma = -LLMAX;
    for (int i = 0; i < n; ++i)
        if (a[i] - b[i] > ma)
        {
            ma = a[i] - b[i];
            result = {i + 1};
        }
        else if (a[i] - b[i] == ma)
            result.push_back(i + 1);
    
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
