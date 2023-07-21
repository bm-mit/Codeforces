//* 214728573	Jul/21/2023 16:53UTC+7	Minh4893IT	C - Product of Three Numbers	GNU C++14	Accepted	31 ms	100 KB

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

vector<int> factorize(int n)
{
    vector<int> res;
    for (int i = 2; i * i <= n; ++i)
        while (n % i == 0)
            res.push_back(i), n /= i;

    if (n - 1)
        res.push_back(n);
    return res;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> fact = factorize(n);
    if (fact.size() < 3)
    {
        cout << "NO" << endl;
        return;
    }

    int startidx = 2;
    int num2 = fact[1];
    if (fact[0] == fact[1])
        num2 *= fact[2], ++startidx;

    int num3 = 1;
    for (int i = startidx; i < fact.size(); ++i)
        num3 *= fact[i];

    if (fact[0] != num2 && num2 != num3 && num3 - 1 && num3 != fact[0])
        cout << "YES" << endl
             << fact[0] << ' ' << num2 << ' ' << num3 << endl;
    else
        cout << "NO" << endl;
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
