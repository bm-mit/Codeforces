//* 211700926	Jul/01/2023 16:40UTC+7	Minh4893IT	A - XXXXX	GNU C++14	Accepted	124 ms	4400 KB

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

int mex(vector<int> &arr)
{
    int res = arr.size();

    int low = 0;
    int high = (int)arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > mid)
        {
            res = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return res;
}

void solve()
{
    int n, x;
    cin >> n >> x;

    int pref[100005] = {};
    for (int i = 1; i <= n; ++i)
    {
        cin >> pref[i];
        pref[i] += pref[i - 1];
    }

    int result = 0;
    vector<int> modindex[10005];
    modindex[0].push_back(0);

    for (int i = 1; i <= n; ++i)
    {
        int mod = pref[i] % x;
        result = max(result, i - mex(modindex[mod]));

        modindex[mod].push_back(i);
    }

    cout << IF(result, result, -1) << endl;
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
