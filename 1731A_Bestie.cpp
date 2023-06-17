//* 209926652	Jun/17/2023 13:22UTC+7	Minh4893IT	A - Bestie	GNU C++17	Accepted	62 ms	100 KB

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

int gcdArr(vector<int> arr)
{
    int g = arr[0];
    for (int i = 1; i < arr.size(); ++i)
        g = gcd(g, arr[i]);
    return g;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    if (gcdArr(arr) == 1)
    {
        cout << 0 << endl;
        return;
    }

    int t = arr[n - 1];
    arr[n - 1] = gcd(n, arr[n - 1]);
    if (gcdArr(arr) == 1)
    {
        cout << 1 << endl;
        return;
    }
    arr[n - 1] = t;

    int u = arr[n - 2];
    arr[n - 2] = gcd(n - 1, arr[n - 2]);
    if (gcdArr(arr) == 1)
    {
        cout << 2 << endl;
        return;
    }

    cout << 3 << endl;
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
