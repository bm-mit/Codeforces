//* 211404666	Jun/29/2023 15:00UTC+7	Minh4893IT	C - Yet Another Broken Keyboard	GNU C++17	Accepted	15 ms	500 KB

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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<char, bool> keys;
    while (k--)
    {
        char chr;
        cin >> chr;
        keys[chr] = true;
    }

    int result = 0;
    int curr = 0;
    for (auto c : s)
    {
        if (keys[c])
            ++curr;
        else
        {
            result += curr * (curr + 1) / 2;
            curr = 0;
        }
    }

    result += curr * (curr + 1) / 2;
    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
