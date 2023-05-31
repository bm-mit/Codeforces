//* 207968062	May/31/2023 20:39UTC+7	Minh4893IT	B - Lunatic Never Content	GNU C++17	Accepted	343 ms	1200 KB

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
    vector<int> arr(n), mod(n / 2);

    for (auto &elem : arr)
        cin >> elem;

    for (int i = 0; i < n / 2; ++i)
        mod[i] = abs(arr[i] - arr[n - i - 1]);

    for (int i = 1; i < n / 2; ++i)
        mod[i] = gcd(mod[i], mod[i - 1]);
    cout << IF(mod.empty(), 0, mod.back()) << endl;
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
