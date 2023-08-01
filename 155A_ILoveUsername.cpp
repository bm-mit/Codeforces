//* 216647444	Aug/01/2023 08:56UTC+7	Minh4893IT	A - I_love_\%username\%	GNU C++14	Accepted	30 ms	0 KB

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

    int ma, mi;
    cin >> ma;
    mi = ma;

    int res = 0;
    while (--n)
    {
        int val;
        cin >> val;

        if (val > ma)
            ++res, ma = val;
        else if (val < mi)
            ++res, mi = val;
    }

    cout << res << endl;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
