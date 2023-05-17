//* 206183544	May/17/2023 15:06UTC+7	Minh4893IT	B - Alyona and flowers	GNU C++17	Accepted	15 ms	0 KB

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
    array<int, 105> arr;

    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    int result = 0;
    for (int i = 0; i < m; ++i)
    {
        int l, r;
        cin >> l >> r;

        int s = arr[r] - arr[l - 1];
        result = max(result, result + s);
    }
    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
