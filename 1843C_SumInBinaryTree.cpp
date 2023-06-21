//* 210401168	00:34:44	Minh4893IT	C - Sum in Binary Tree	GNU C++17	Accepted	46 ms	0 KB 

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

string tobin(int n)
{
    string result;
    do
    {
        result += n % 2 + '0';
        n /= 2;
    } while (n);
    reverse(result.begin(), result.end());
    return result;
}

void solve()
{
    int n;
    cin >> n;

    string bin = tobin(n);
    int result = 0;
    int curr = 0;
    for (auto c : bin)
    {
        curr = curr * 2 + (c - '0');
        result += curr;
    }
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
