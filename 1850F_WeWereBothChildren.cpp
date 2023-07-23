//* 214880215	Jul/21/2023 22:42UTC+7	Minh4893IT	F - We Were Both Children	GNU C++14	Accepted	670 ms	7700 KB

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

    umap<int, int> count;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;

        if (val <= n)
            ++count[val];
    }

    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        int curr = 0;
        for (int j = 1; j * j <= i; ++j)
            if (i % j == 0)
            {
                if (j * j != i)
                    curr += count[i / j];
                curr += count[j];
            }

        result = max(result, curr);
    }

    cout << result << endl;
}

signed main()
{
    FAST_IO;

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
