//* 210013899	Jun/18/2023 10:17UTC+7	Minh4893IT	B - Not Dividing	GNU C++17	Accepted	46 ms	

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
    
    arr[0] += arr[0] == 1;
    for (int i = 1; i < n; ++i)
        while (arr[i] % arr[i-1] == 0 || arr[i] == 1)
            ++arr[i];
    
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
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
