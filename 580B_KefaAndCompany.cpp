//* 210664338	Jun/22/2023 21:08UTC+7	Minh4893IT	B - Kefa and Company	GNU C++17	Accepted	78 ms	2400 KB

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
    int n, d;
    cin >> n >> d;

    vector<pair<int, int>> arr(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> arr[i].first >> arr[i].second;

    sort(arr.begin(), arr.end());

    vector<int> pref(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        pref[i] = arr[i].second;
        pref[i] += pref[i - 1];
    }

    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        int l = i;
        int r = i - 1;

        int low = i;
        int high = n;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid].first < arr[i].first + d)
            {
                r = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }

        result = max(result, pref[r] - pref[l - 1]);
    }

    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
