//* 210535138	Jun/21/2023 17:49UTC+7	Minh4893IT	A - Co-prime Array	GNU C++17	Accepted	15 ms	100 KB

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

int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    vector<int> res = {arr[0]};
    for (int i = 1; i < n; ++i)
    {
        if (gcd(arr[i], res.back()) != 1)
            res.push_back(1);
        res.push_back(arr[i]);
    }

    cout << res.size() - n << endl;
    for (auto elem : res)
        cout << elem << ' ';
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
