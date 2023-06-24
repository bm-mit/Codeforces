//* 210840722	Jun/24/2023 14:49UTC+7	Minh4893IT	B - Vasya and Wrestling	GNU C++17	Accepted	78 ms	3100 KB

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

    int sum = 0;
    vector<int> arr1, arr2;

    int last = 1;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        sum += val;

        last = val / abs(val);

        if (val > 0)
            arr1.push_back(val);
        else
            arr2.push_back(abs(val));
    }

    if (sum == 0)
        cout << IF(arr1 == arr2, IF(last > 0, "first", "second"), IF(arr1 > arr2, "first", "second"));
    else
        cout << IF(sum > 0, "first", "second");
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
