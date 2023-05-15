//* 205932813	May/15/2023 08:54UTC+7	Minh4893IT	B - Urbanization	GNU C++14	Accepted	46 ms	800 KB

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
    int n, n1, n2;
    cin >> n >> n1 >> n2;
    array<int, 100005> arr;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr.begin(), arr.begin() + n, greater<int>());

    if (n1 > n2)
        swap(n1, n2);

    int idx = 0;
    int sum1 = 0, sum2 = 0;
    for (; idx < n1; ++idx)
        sum1 += arr[idx];

    for (; idx < n2 + n1; ++idx)
        sum2 += arr[idx];
    cerr << sum1 << ' ' << sum2 << endl;

    printf("%.8f", (double)sum1 / n1 + (double)sum2 / n2);
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
