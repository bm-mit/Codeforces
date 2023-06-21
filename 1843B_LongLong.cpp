//* 210391571	Jun/20/2023 22:00UTC+7	Minh4893IT	B - Long Long	GNU C++17	Accepted	78 ms	3900 KB

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

    vector<int> arr;
    int res1 = 0;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        res1 += abs(val);
        if (val)
            arr.push_back(val);
    }

    if (arr.empty())
    {
        cout << res1 << " 0" << endl;
        return;
    }

    deque<int> arr2 = {arr[0]};
    for (int i = 1; i < arr.size(); ++i)
    {
        if (arr[i] / abs(arr[i]) != arr2.back() / abs(arr2.back()))
            arr2.push_back(arr[i]);
    }

    while (arr2.size() && arr2.front() >= 0)
        arr2.pop_front();
    while (arr2.size() && arr2.back() >= 0)
        arr2.pop_back();

    if (arr2.size())
        cout << res1 << ' ' << arr2.size() / 2 + 1 << endl;
    else
        cout << res1 << " 0" << endl;
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
