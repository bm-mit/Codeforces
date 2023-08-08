//* 217279273	Aug/05/2023 21:49UTC+7	Minh4893IT	A - Tales of a Sort	GNU C++14	Accepted	31 ms	200 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define pq priority_queue
#define endl "\n"

#define LLMAX INT64_MAX
#define GET(var) getline(cin, var)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    vector<int> max = {0};
    for (int i = 1; i < n; ++i)
        if (arr[i] >= arr[max.back()])
            max.push_back(i);

    int i;
    for (i = n - 1; i >= 0; --i)
        if (max.size() && max.back() == i)
            max.pop_back();
        else
            break;

    if (i == -1)
        cout << 0;
    else
        cout << arr[max.back()];
    cout << endl;
}

signed main()
{
    FAST_IO;

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
