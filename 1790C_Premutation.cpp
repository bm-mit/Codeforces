//* 215757697	Jul/26/2023 22:35UTC+7	Minh4893IT	C - Premutation	GNU C++14	Accepted	93 ms	300 KB

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

    vector<deque<int>> board(n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 1; j < n; ++j)
        {
            int val;
            cin >> val;
            board[i].push_back(val);
        }
    }

    for (int i = 0; i < n; ++i)
    {
        map<int, int> count = {};
        for (int j = 0; j < n; ++j)
        {
            if (board[j].size())
                ++count[board[j].front()];
        }
        for (auto p : count)
        {
            if (p.second == n - 1)
            {
                for (int i = 0; i < n; ++i)
                    if (board[i].size() && board[i].front() == p.first)
                        board[i].pop_front();
                cout << p.first << ' ';
            }
        }
    }

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
