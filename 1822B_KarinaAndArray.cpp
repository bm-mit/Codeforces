//* 203400796	Apr/25/2023 13:06UTC+7	Minh4893IT	1822B - Karina and Array	GNU C++17	Accepted	420 ms	1600 KB

#include <bits/stdc++.h>
using namespace std;

using oint = int;
#define int long long int

#define endl "\n"

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define FORIR(i, a, n) for (int i = a; i < n; i++)
#define FORI(i, n) FORIR(i, 0, n)
#define FORR(a, n) FORIR(i, a, n)
#define FOR(n) FORIR(i, 0, n)
#define EACH(x, a) for (auto &x : a)

void solve()
{
    int n;
    cin >> n;
    vector<int>arr(n);

    EACH(elem, arr)
        cin >> elem;
    
    sort(all(arr));

    cout << max(arr[0] * arr[1], arr[n - 1] * arr[n - 2]) << endl;
}

oint main()
{
    int t;
    cin >> t;
    FOR(t)
    {
        solve();
    }

    return 0;
}