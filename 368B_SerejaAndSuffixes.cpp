//* 217530716	Aug/07/2023 09:56UTC+7	Minh4893IT	B - Sereja and Suffixes	GNU C++14	Accepted	358 ms	4900 KB

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
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    set<int> nums;
    vector<int> result(n);
    for (int i = n - 1; i >= 0; --i)
    {
        nums.insert(arr[i]);
        result[i] = nums.size();
    }

    while (m--)
    {
        int q;
        cin >> q;

        cout << result[--q] << endl;
    }
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
