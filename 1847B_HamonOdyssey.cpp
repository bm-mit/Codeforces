//* 212416354	Jul/06/2023 22:39UTC+7	Minh4893IT	B - Hamon Odyssey	GNU C++14	Accepted	93 ms	1600 KB

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

    vector<int> arr(n + 1);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int alland = arr[0];
    for (int i = 0; i < n; ++i)
        alland &= arr[i];

    if (alland)
    {
        cout << 1 << endl;
        return;
    }

    int count = 0;
    int last = arr[0];
    for (int i = 0; i < n; ++i)
    {
        last &= arr[i];
        if (!last)
        {
            ++count;
            last = arr[i + 1];
        }
    }

    cout << count << endl;
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
