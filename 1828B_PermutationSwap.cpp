//* 207866635	May/30/2023 21:19UTC+7	Minh4893IT	B - Permutation Swap	GNU C++17	Accepted	78 ms	1600 KB

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

    vector<int> divisors;
    for (int i = 1; i <= n; ++i)
    {
        int c;
        cin >> c;

        divisors.push_back(abs(c - i));
    }

    for (int i = 1; i < n; ++i)
        divisors[i] = gcd(divisors[i - 1], divisors[i]);
    cout << divisors.back() << endl;
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
