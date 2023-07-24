//* 215364557	Jul/24/2023 20:45UTC+7	Minh4893IT	D - Matryoshkas	GNU C++14	Accepted	265 ms	17500 KB

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

    map<int, int> result;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i], ++result[arr[i]];
    
    sort(arr.begin(), arr.end());
    for (int elem : arr)
    {
        if (result[elem - 1])
            --result[elem - 1];
    }

    int res = 0;
    for (auto p : result)
        res += p.second;
    cout << res << endl;
    
}

signed main()
{
    FAST_IO;

    int t;
    cin >> t;

    while (t --)
        solve();

    return 0;
}
