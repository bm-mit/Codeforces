//* 212619792	Jul/07/2023 22:20UTC+7	Minh4893IT	D - Rudolph and Christmas Tree	GNU C++14	Accepted	109 ms	1600 KB

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
    int n, d, h;
    cin >> n >> d >> h;

    double area = (double)d * h / 2;

    vector<int> pos(n);
    for (int i = 0; i < n; ++i)
        cin >> pos[i];

    double result = area;
    for (int i = 1; i < n; ++i)
    {
        if (pos[i - 1] + h > pos[i])
        {
            int dist = pos[i - 1] + h - pos[i];
            double newd = (double)dist / h * d;

            result -= dist * newd / 2;
        }

        result += area;
    }

    cout << result << endl;
}

signed main()
{
    FAST_IO;

    cout << fixed << setprecision(7);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
