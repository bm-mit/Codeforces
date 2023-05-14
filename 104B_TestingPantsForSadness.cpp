//* 205804018	May/14/2023 15:10UTC+7	Minh4893IT	B - Testing Pants for Sadness	GNU C++14	Accepted	30 ms	0 KB

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
void OFILE(const char * finp, const char * fout)
{
    freopen(finp, "r", stdin), freopen(fout, "w", stdout);
}

void solve()
{
    int n;
    cin >> n;

    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        int options;
        cin >> options;
        result += 1 + (options - 1) * i;
    }
    cout << result;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
