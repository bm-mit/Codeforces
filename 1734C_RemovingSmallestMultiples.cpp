//* 216579215	Jul/31/2023 20:00UTC+7	Minh4893IT	C - Removing Smallest Multiples	GNU C++14	Accepted	62 ms	300 KB

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

    vector<bool> T(n + 1);
    vector<bool> deleted(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        char c;
        cin >> c;
        T[i] = c - '0';
    }

    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (T[i])
            continue;

        for (int j = i; j <= n; j += i)
        {
            if (T[j])
                break;
            if (deleted[j])
                continue;

            deleted[j] = true;
            result += i;
        }
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
