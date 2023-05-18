//* 206320147	May/18/2023 16:28UTC+7	Minh4893IT	B - Alyona and Mex	GNU C++17	Accepted	46 ms	800 KB

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

    array<int, 100005> arr;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.begin() + n);

    int count = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] > count)
            arr[i] = ++count;

    cout << ++count;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
