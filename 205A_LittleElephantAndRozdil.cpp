//* 216992103	Aug/03/2023 20:15UTC+7	Minh4893IT	A - Little Elephant and Rozdil	GNU C++14	Accepted	92 ms	800 KB

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
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int mi = arr[0], appear = 0, idx = 1;
    for (int i = 1; i < n; ++i)
    {
        appear += arr[i] == mi;
        if (arr[i] < mi)
            mi = arr[i], appear = 0, idx = i + 1;
    }

    if (appear)
        cout << "Still Rozdil";
    else
        cout << idx;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
