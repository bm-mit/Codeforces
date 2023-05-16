//* 206094577	May/16/2023 20:41UTC+7	Minh4893IT	B - Walking in the Rain	GNU C++17	Accepted	30 ms	0 KB

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
    
    int result = min(arr.front(), arr.back());
    for (int i = 1; i < n; ++i)
        result = min(result, max(arr[i], arr[i-1]));
    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
