//* 210661626	Jun/22/2023 20:44UTC+7	Minh4893IT	B - Tavas and SaDDas	GNU C++17	Accepted	15 ms	0 KB

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

int todec(string bin)
{
    int result = 0;
    for (auto c : bin)
        result = result * 2 + (c - '0');
    return result;
}

void solve()
{
    string s;
    cin >> s;

    for (auto &c : s)
        c = '0' + (c == '7');

    int curr = 2;
    int result = 0;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        result += curr;
        curr *= 2;
    }

    cout << result + todec(s) + 1;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
