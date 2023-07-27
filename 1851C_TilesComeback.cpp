//* 215546838	Jul/25/2023 22:10UTC+7	Minh4893IT	C - Tiles Comeback	GNU C++14	Accepted	187 ms	1600 KB

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
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int count1 = 0;
    int lastidx1 = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] == arr.front())
        {
            ++count1;
            lastidx1 = i;
            if (count1 >= k)
                break;
        }
    
    int count2 = 0;
    int lastidx2 = n - 1;
    for (int i = n - 1; i >= 0; --i)
        if (arr[i] == arr.back())
        {
            ++count2;
            lastidx2 = i;
            if (count2 >= k)
                break;
        }
    
    if (arr.front() == arr.back())
    {
        if (count1 >= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }

    cerr << lastidx1 << ' ' << lastidx2 << endl;
    if (count1 >= k && count2 >= k && lastidx1 <= lastidx2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
