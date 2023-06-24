//* 210829583	Jun/24/2023 12:06UTC+7	Minh4893IT	B - Petr and a Combination Lock	GNU C++17	Accepted	15 ms	0 KB

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

int n;
vector<int> arr;

bool back(int idx, int val)
{
    if (idx >= n)
    {
        val = val % 360;
        val = (val + 360) % 360;

        return (val % 360 + 360) % 360 == 0;
    }

    if (back(idx + 1, val + arr[idx]))
        return true;
    if (back(idx + 1, val - arr[idx]))
        return true;
    return false;
}

void solve()
{
    cin >> n;
    arr.resize(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << IF(back(0, 0), "YES", "NO");
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
