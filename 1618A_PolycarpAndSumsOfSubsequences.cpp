//* 214028211	Jul/16/2023 18:42UTC+7	Minh4893IT	A - Polycarp and Sums of Subsequences	GNU C++14	Accepted	31 ms	0 KB

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
    vector<int> arr(7);
    for (auto &elem : arr)
        cin >> elem;
    
    cout << arr[0] << ' ' << arr[1] << ' ' << arr.back() - arr[0] - arr[1] << endl;
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
