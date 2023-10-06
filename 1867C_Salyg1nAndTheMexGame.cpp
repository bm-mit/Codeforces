//* 222962694	Sep/11/2023 22:53UTC+7	Minh4893IT	C - Salyg1n and the MEX Game	GNU C++14	Accepted	1091 ms	800 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
// #define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int i;
    for (i = 0; i < n; ++i)
        if (arr[i] != i)
        {
            cout << i << endl;
            break;
        }
    
    if (i == n)
        cout << i << endl;

    int val;
    cin >> val;

    while (val != -1 && val != -2)
        cout << val << endl, cin >> val;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
