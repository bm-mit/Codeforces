//* 211778465	Jul/02/2023 08:26UTC+7	Minh4893IT	B - Books	GNU C++14	Accepted	92 ms	800 KB

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
    int n, t;
    cin >> n >> t;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int left = 0;
    int right = 0;
    int ans = 0;
    int sum = 0;
    while (left < n && right < n)
    {
        while (right < n)
        {
            sum += arr[right++];
            if (sum > t)
            {
                sum -= arr[--right];
                break;
            }
        }

        ans = max(ans, right - left);
        sum -= arr[left++];
    }

    cout << ans;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
