//* 212960761	Jul/09/2023 18:52UTC+7	Minh4893IT	E1 - Rudolf and Snowflakes (simple version)	GNU C++14	Accepted	62 ms	100 KB

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

const int MAXN = 1000005;

vector<bool> result(MAXN);

void preprocess()
{
    for (int base = 2; base <= MAXN; ++base)
    {
        int pow = base * base * base;
        int sumpow = 1 + base + base * base;

        while (sumpow <= MAXN)
        {
            result[sumpow] = true;
            sumpow += pow;

            pow *= base;
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    cout << IF(result[n], "YES", "NO") << endl;
}

signed main()
{
    FAST_IO;

    preprocess();

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
