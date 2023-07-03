//* 211926763	Jul/03/2023 16:42UTC+7	Minh4893IT	B - Robot's Task	GNU C++14	Accepted	15 ms	200 KB

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

    vector<int> uncollected(n);
    for (int i = 0; i < n; ++i)
        cin >> uncollected[i];

    int result = -1;
    int have = 0;
    do
    {
        vector<int> left;
        ++result;
        for (int elem : uncollected)
            if (elem > have)
                left.push_back(elem);
            else
                ++have;
        
        uncollected = left;
        reverse(uncollected.begin(), uncollected.end());
    } while (uncollected.size());
    
    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
