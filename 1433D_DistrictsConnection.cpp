//* 211889127	Jul/03/2023 09:23UTC+7	Minh4893IT	D - Districts Connection	GNU C++14	Accepted	15 ms	700 KB

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

bool comp(vector<int> a, vector<int> b)
{
    return a.size() > b.size();
}

void solve()
{
    int n;
    cin >> n;

    map<int, vector<int>> gangs;
    for (int i = 1; i <= n; ++i)
    {
        int val;
        cin >> val;
        gangs[val].push_back(i);
    }

    if (gangs.size() == 1)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES" << endl;
    vector<vector<int>> districts;
    for (auto &elem : gangs)
        districts.push_back(elem.second);
    
    for (int i = 1; i < districts.size(); ++i)
        for (auto elem : districts[i])
            cout << districts[0][0] << ' ' << elem << endl;
    
    for (int i = 1; i < districts[0].size(); ++i)
        cout << districts[1][0] << ' ' << districts[0][i] << endl;
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
