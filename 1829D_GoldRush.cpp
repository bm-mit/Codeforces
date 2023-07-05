//* 212153216	Jul/05/2023 07:36UTC+7	Minh4893IT	D - Gold Rush	GNU C++14	Accepted	31 ms	100 KB

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

struct dpnode
{
    bool calculated = false;
    bool result = false;

    dpnode(bool _calculated = false, bool _result = false) : calculated(_calculated), result(_result) {}
};

int n, m;
map<int, dpnode> dp;

bool recur(int nuggets)
{
    if (dp[nuggets].calculated)
        return dp[nuggets].result;

    dp[nuggets].calculated = true;
    if (nuggets < m)
        return dp[nuggets].result = false;
    if (nuggets == m)
        return dp[nuggets].result = true;
    if (nuggets % 3)
        return dp[nuggets].result = false;

    int calc1 = nuggets / 3;
    int calc2 = calc1 * 2;
    return dp[nuggets].result = recur(calc1) || recur(calc2);
}

void solve()
{
    cin >> n >> m;
    dp = map<int, dpnode>();

    cout << IF(recur(n), "YES", "NO") << endl;
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
