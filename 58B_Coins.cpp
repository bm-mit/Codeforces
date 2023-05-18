//* 206318674	May/18/2023 16:14UTC+7	Minh4893IT	B - Coins	GNU C++17	Accepted	30 ms	0 KB

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

    vector<int> result = {n};
    int f = 2;
    while (n > 1)
    {
        if (n % f == 0)
            n /= f--;
        if (result.back() != n)
            result.push_back(n);
        ++f;
    }

    EACH(elem, result)
        cout << elem << ' ';
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
