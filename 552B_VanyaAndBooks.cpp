//* 205687012	May/13/2023 14:39UTC+7	Minh4893IT	B - Vanya and Books	GNU C++14	Accepted	15 ms	0 KB

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

    int looped = 1;
    int pow = 9;
    int last = 0;
    int result = 0;
    while (pow <= n)
    {
        result += (pow - last) * looped;
        ++looped;
        last = pow;
        pow = pow * 10 + 9;
    }

    result += (n - last) * looped;
    cout << result;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
