//* 211343812	Jun/28/2023 20:37UTC+7	Minh4893IT	B - Make Them Equal	GNU C++17	Accepted	15 ms	100 KB

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
    int n;
    cin >> n;

    set<int> s;
    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val);
    }

    if (s.size() > 3)
    {
        cout << -1;
        return;
    }

    if (s.size() == 1)
    {
        cout << 0;
        return;
    }

    int min = *s.begin();

    set<int>::iterator iter = s.begin();
    advance(iter, 1);
    int mid = *iter;

    if (s.size() == 2)
    {
        if ((mid - min) % 2)
            cout << mid - min;
        else
            cout << (mid - min) / 2;
        return;
    }

    iter = s.begin();
    advance(iter, 2);
    int max = *iter;

    if (max - mid == mid - min)
    {
        cout << max - mid;
        return;
    }

    cout << -1;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
