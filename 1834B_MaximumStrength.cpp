//* 210050678	Jun/18/2023 15:40UTC+7	Minh4893IT	B - Maximum Strength	GNU C++17	Accepted	15 ms	100 KB

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

void solve()
{
    string left, right;
    cin >> left >> right;

    reverse(left.begin(), left.end());
    reverse(right.begin(), right.end());

    while (left.size() < right.size())
        left.push_back('0');
    while (right.size() < left.size())
        right.push_back('0');
    
    while (left.size() && right.size() && left.back() == right.back())
        left.pop_back(), right.pop_back();
    
    int result = 0;
    if (left.size() && right.size())
    {
        result += abs(left.back() - right.back());
        result += 9 * (left.size() - 1);
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
