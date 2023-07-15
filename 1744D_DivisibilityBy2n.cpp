//* 213920627	Jul/15/2023 21:42UTC+7	Minh4893IT	D - Divisibility by 2^n	GNU C++14	Accepted	62 ms	3100 KB

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

    vector<int> arr(n);
    vector<int> bits(n);
    int trailzeroes = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        trailzeroes += __builtin_ctz(arr[i]);

        bits[i] = __builtin_ctz(i + 1);
    }

    if (trailzeroes >= n)
    {
        cout << 0 << endl;
        return;
    }

    sort(bits.rbegin(), bits.rend());
    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        trailzeroes += bits[i];
        ++result;
        if (trailzeroes >= n)
        {
            cout << result << endl;
            return;
        }
    }

    cout << -1 << endl;
    return;
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
