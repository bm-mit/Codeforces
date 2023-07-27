//* 215519591	Jul/25/2023 21:48UTC+7	Minh4893IT	B - Parity Sort	GNU C++14	Accepted	108 ms	3100 KB

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

    vector<int> arr(n), sorted(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sorted[i] = arr[i];
    }

    sort(sorted.begin(), sorted.end());

    for (int i = 0; i < n; ++i)
        if (arr[i] % 2 != sorted[i] % 2)
        {
            cout << "NO" << endl;
            return;
        }
    
    cout << "YES" << endl;
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
