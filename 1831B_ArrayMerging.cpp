//* 207861010	May/30/2023 20:35UTC+7	Minh4893IT	B - Array merging	GNU C++17	Accepted	483 ms	21600 KB

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

    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    map<int, int> counta = {{arr.front(), 1}};

    int curr = 1;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] == arr[i - 1])
            counta[arr[i]] = max(++curr, counta[arr[i]]);
        else
            counta[arr[i]] = max(curr = 1, counta[arr[i]]);
    }

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    map<int, int> countb = {{arr.front(), 1}};

    curr = 1;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] == arr[i - 1])
            countb[arr[i]] = max(++curr, countb[arr[i]]);
        else
            countb[arr[i]] = max(curr = 1, countb[arr[i]]);
    }

    int result = 1;
    for (auto elem : counta)
        result = max(result, elem.second + countb[elem.first]);

    for (auto elem : countb)
        result = max(result, elem.second + counta[elem.first]);

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
