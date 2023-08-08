//* 217662054	Aug/07/2023 22:16UTC+7	Minh4893IT	B - Maximum Rounding	GNU C++14	Accepted	31 ms	800 KB

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
    string s;
    cin >> s;

    int n = s.size();
    bool incsize = false;

    string result;
    bool inc = false;
    for (int i = 0; i < n; ++i)
    {
        result.push_back(s[i]);
        if (s[i] >= '5')
        {
            while (result.size() && result.back() >= '4')
                result.pop_back();
            if (result.empty())
            {
                result += '1';
                incsize = true;
                break;
            }
            result.back()++;
            break;
        }
    }

    cout << result;
    for (int i = result.size(); i < s.size() + incsize; ++i)
        cout << 0;
    cout << endl;
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
