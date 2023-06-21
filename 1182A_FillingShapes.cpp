//* 210529514	Jun/21/2023 16:50UTC+7	Minh4893IT	A - Filling Shapes	GNU C++17	Accepted	15 ms	0 KB

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
    if (n & 1)
    {
        cout << 0;
        return;
    }

    int result = 1;
    for (int i = 0; i < n / 2; ++i)
        result *= 2;
    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
