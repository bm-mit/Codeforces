//* 212331586	Jul/06/2023 15:54UTC+7	Minh4893IT	B - Kayaking	GNU C++14	Accepted	31 ms	0 KB

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

    vector<int> arr(2 * n);
    for (int i = 0; i < 2 * n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    int ans = LLMAX;

    for (int i = 0; i < 2 * n; ++i)
        for (int j = i + 1; j < 2 *n ; ++j)
        {
            vector<int> doublekayak;
            for (int k = 0; k < 2 * n; ++k)
            {
                if (k == i || k == j)
                    continue;
                
                doublekayak.push_back(arr[k]);
            }

            int curr = 0;
            for (int l = 0; l < doublekayak.size(); l += 2)
                curr += doublekayak[l + 1] - doublekayak[l];
            ans = min(ans, curr);
        }
    
    cout << ans;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
