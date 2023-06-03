//* 208297850	Jun/03/2023 19:58UTC+7	Minh4893IT	B - Make it Divisible by 25	GNU C++17	Accepted	46 ms	0 KB

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

int check(string n, string comp)
{
    int res = 0;
    while (n.size() && n.back() != comp[1])
    {
        ++res;
        n.pop_back();
    }

    int i = n.size() - 2;
    while (n.size() > 1 && n[i] != comp[0])
    {
        ++res;
        --i;
        char c = n.back();
        n.pop_back();
        n.pop_back();
        n.push_back(c);
    }

    if (n.size() >= 2 && n.substr(n.size() - 2, 2) == comp)
        return res;
    return -1;
}

void solve()
{
    string n;
    cin >> n;

    int res1 = check(n, "00");
    int res2 = check(n, "25");
    int res3 = check(n, "50");
    int res4 = check(n, "75");

    int result = 1e9;
    if (res1 != -1)
        result = res1;
    if (res2 != -1)
        result = min(result, res2);
    if (res3 != -1)
        result = min(result, res3);
    if (res4 != -1)
        result = min(result, res4);
    cout << result << endl;
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
