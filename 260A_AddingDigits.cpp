//* 217232597	Aug/05/2023 16:45UTC+7	Minh4893IT	A - Adding Digits	GNU C++14	Accepted	31 ms	0 KB

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
    int a, b, n;
    cin >> a >> b >> n;

    for (int i = 0; i <= 9; ++i)
        if ((a * 10 + i) % b == 0)
        {
            cout << a;
            cout << i;
            for (int i = 1; i < n; ++i)
                cout << 0;
            return;
        }

    cout << -1;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
