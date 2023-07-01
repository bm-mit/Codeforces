//* 211736624	Jul/01/2023 22:06UTC+7	Minh4893IT	B - Soldier and Badges	GNU C++14	Accepted	15 ms	0 KB

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
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (arr[i] <= arr[i - 1])
            result += arr[i - 1] - arr[i] + 1;
        arr[i] = max(arr[i], arr[i - 1] + 1);
    }

    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
