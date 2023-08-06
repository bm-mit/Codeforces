//* 217420725	Aug/06/2023 14:44UTC+7	Minh4893IT	B - Jzzhu and Sequences	GNU C++14	Accepted	15 ms	0 KB

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

const int MOD = 1000000007;

void solve()
{
    int x, y, n;
    cin >> x >> y >> n;

    vector<int> arr = {x, y, y - x, -x, -y, x - y};
    cout << (arr[--n % 6] % MOD + MOD) % MOD;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
