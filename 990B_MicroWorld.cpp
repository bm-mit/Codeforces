//* 212295906	Jul/06/2023 08:52UTC+7	Minh4893IT	B - Micro-World	GNU C++14	Accepted	78 ms	4700 KB

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
    sort(arr.begin(), arr.end());

    vector<int> result = {arr.front()};
    for (int i = 1; i < n; ++i)
    {
        while (result.size() && result.back() >= arr[i] - k && result.back() < arr[i])
            result.pop_back();
        result.push_back(arr[i]);
    }

    cout << result.size();
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
