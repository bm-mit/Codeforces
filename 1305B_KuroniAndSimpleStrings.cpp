//* 211141462	Jun/26/2023 20:48UTC+7	Minh4893IT	B - Kuroni and Simple Strings	GNU C++17	Accepted	15 ms	200 KB

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

    vector<int> open;
    vector<int> close;
    for (int i = 0; i < n; ++i)
        if (s[i] == '(')
            open.push_back(i);
        else
            close.push_back(i);

    reverse(open.begin(), open.end());

    int temp = min(open.size(), close.size());
    vector<int> result;
    for (int i = 0; i < temp; ++i)
    {
        if (open.back() < close.back())
        {
            result.push_back(open.back());
            result.push_back(close.back());
            open.pop_back();
            close.pop_back();
        }
        else
            break;
    }

    if (result.empty())
    {
        cout << 0;
        return;
    }

    cout << 1 << endl;
    cout << result.size() << endl;

    sort(result.begin(), result.end());

    for (auto elem : result)
        cout << elem + 1 << ' ';
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
