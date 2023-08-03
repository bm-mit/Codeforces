//* 216984386	Aug/03/2023 19:19UTC+7	Minh4893IT	A - Petr and Book	GNU C++14	Accepted	30 ms	0 KB

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

bool solve()
{
    int n;
    array<int, 7> arr;
    cin >> n;
    for (auto &elem : arr)
        cin >> elem;
    
    for (int i = 0; true; i = (i + 1) % 7)
        if ((n -= arr[i]) <= 0)
            return bool(cout << i + 1);
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
