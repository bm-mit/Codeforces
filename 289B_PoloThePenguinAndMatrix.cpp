//* 217425754	Aug/06/2023 15:30UTC+7	Minh4893IT	B - Polo the Penguin and Matrix	GNU C++14	Accepted	30 ms	100 KB

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
    int n, m, d;
    cin >> n >> m >> d;

    vector<int> arr(n * m);
    for (int i = 0; i < n * m; ++i)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int result = 0;
    for (auto elem : arr)
        if (elem % d != arr.front() % d)
        {
            cout << -1;
            return;
        }
        else
            result += abs(elem - arr[n * m / 2]) / d;
    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
