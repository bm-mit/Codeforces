//* 214821977	Jul/21/2023 21:58UTC+7	Minh4893IT	D - Balanced Round	GNU C++14	Accepted	78 ms	4700 KB

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
    for (auto &elem : arr)
        cin >> elem;
    sort(arr.begin(), arr.end());

    vector<int> pos = {0};
    for (int i = 1; i < n; ++i)
        if (arr[i] - arr[i - 1] > k)
            pos.push_back(i);
    pos.push_back(n);

    int maxsize = 0;
    for (int i = 1; i < pos.size(); ++i)
        maxsize = max(maxsize, pos[i] - pos[i - 1]);
    cout << n - maxsize << endl;
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
