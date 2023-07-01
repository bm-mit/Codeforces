//* 211690804	Jul/01/2023 14:48UTC+7	Minh4893IT	B - Numbers on the Chessboard	GNU C++14	Accepted	373 ms	0 KB

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
    int n, q;
    cin >> n >> q;

    while (q--)
    {
        int x, y;
        cin >> y >> x;

        if (n % 2 == 0)
        {
            if (x % 2 == y % 2)
                cout << n / 2 * (y - 1) + (x + 1) / 2 << endl;
            else
                cout << n * n / 2 + n / 2 * (y - 1) + (x + 1) / 2 << endl;
        }
        else
        {
            if (x % 2 == y % 2)
                cout << ((y - 1) * n + x) / 2 + 1 << endl;
            else
                cout << ((y - 1) * n + x) / 2 + n * n / 2 + 1 << endl;
        }
    }
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
