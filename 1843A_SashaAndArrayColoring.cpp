//* 210372739	00:12:04	Minh4893IT	A - Sasha and Array Coloring	GNU C++17	Accepted	30 ms	144 KB

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
    for (auto &elem : arr)
        cin >> elem;

    sort(arr.begin(), arr.end());

    int l = 0;
    int r = n - 1;
    int result = 0;
    while (l < r)
    {
        result += arr[r] - arr[l];
        ++l;
        --r;
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
