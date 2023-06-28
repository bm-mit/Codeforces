//* 211345849	Jun/28/2023 20:59UTC+7	Minh4893IT	B - Chloe and the sequence	GNU C++17	Accepted	15 ms	0 KB

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

int countr_zero(int n)
{
    int result = 0;
    while (!(n & 1))
        ++result, n >>= 1;
    return result;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    cout << countr_zero(k) + 1;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
