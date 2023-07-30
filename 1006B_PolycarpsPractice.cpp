//* 216403644	Jul/30/2023 13:22UTC+7	Minh4893IT	B - Polycarp's Practice	GNU C++14	Accepted	15 ms	100 KB

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

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    priority_queue<pair<int, int>, vector<pair<int, int>>, function<bool(pair<int, int>, pair<int, int>)>> pqueue(comp);
    for (int i = 0; i < n; ++i)
    {
        if (i < k)
            pqueue.push({arr[i], i + 1});
        else if (pqueue.size() && pqueue.top().first < arr[i])
        {
            pqueue.pop();
            pqueue.push({arr[i], i + 1});
        }
    }

    int sum = 0;
    vector<int> idx = {0};
    while (pqueue.size())
    {
        sum += pqueue.top().first;
        idx.push_back(pqueue.top().second);
        pqueue.pop();
    }

    cout << sum << endl;

    sort(idx.begin(), idx.end());
    for (int i = 1; i < idx.size() - 1; ++i)
        cout << idx[i] - idx[i - 1] << ' ';
    cout << n - idx[idx.size() - 2];
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
