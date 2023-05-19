//* 206480122	00:21:56	Minh4893IT	B - Restore the Weather	GNU C++17	Accepted	124 ms	3132 KB

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
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> arrA(n);
    vector<int> arrB(n), result(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arrA[i].first;
        arrA[i].second = i;
    }

    for (int i = 0; i < n; ++i)
        cin >> arrB[i];
    
    sort(arrA.begin(), arrA.end());
    sort(arrB.begin(), arrB.end());

    for (int i = 0; i < n; ++i)
    {
        result[arrA[i].second] = arrB[i];
    }

    for (auto elem : result)
        cout << elem << ' ';
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
