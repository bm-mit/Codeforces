//* 215613813	Jul/25/2023 23:42UTC+7	Minh4893IT	E - Nastya and Potions	GNU C++14	Accepted	233 ms	22100 KB

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

struct node
{
    bool calc = false;
    int val;
    vector<int> next;
};

int n, k;
vector<node> tree;

int dp(int idx)
{
    if (tree[idx].calc)
        return tree[idx].val;

    tree[idx].calc = true;
    int res = 0;
    for (auto elem : tree[idx].next)
        res += dp(elem);

    return tree[idx].val = min(tree[idx].val, res);
}

void solve()
{
    cin >> n >> k;
    tree.clear();
    tree.resize(n + 1);

    for (int i = 1; i <= n; ++i)
        cin >> tree[i].val;

    for (int i = 1; i <= k; ++i)
    {
        int val;
        cin >> val;
        tree[val].val = 0;
        tree[val].calc = true;
    }

    for (int i = 1; i <= n; ++i)
    {
        int m;
        cin >> m;

        tree[i].next.resize(m);
        if (!m)
        {
            tree[i].calc = true;
            continue;
        }

        for (int j = 0; j < m; ++j)
            cin >> tree[i].next[j];
    }

    for (int i = 1; i <= n; ++i)
        cout << dp(i) << ' ';
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
