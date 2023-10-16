//* 228435114	Oct/16/2023 22:00UTC+7	Minh4893IT	B - Card Deck	GNU C++14	Accepted	62 ms	2400 KB

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

    array<int, 100005> arr;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    vector<int> idx = {0};
    for (int i = 1; i < n; ++i)
        if (arr[i] > arr[idx.back()])
            idx.push_back(i);
    idx.push_back(n);

    for (auto it = idx.rbegin() + 1; it != idx.rend(); ++it)
        for (int i = *it; i < *(it - 1); ++i)
            cout << arr[i] << " ";
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
