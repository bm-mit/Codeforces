//* 215804845	Jul/27/2023 08:48UTC+7	Minh4893IT	D - Masha and a Beautiful Tree	GNU C++14	Accepted	62 ms	3600 KB

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

    int result = 0;
    for (int i = 1; i <= n; i *= 2)
    {
        vector<int> temp;

        for (int j = 1; j < arr.size(); j += 2)
        {
            if (arr[j - 1] > arr[j])
                swap(arr[j - 1], arr[j]), ++result;
            if (arr[j] - arr[j - 1] != i)
            {
                cout << -1 << endl;
                return;
            }

            temp.push_back(arr[j]);
        }

        arr = temp;
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
