//* 218965780	Aug/15/2023 22:27UTC+7	Minh4893IT	C - Yet Another Permutation Problem	GNU C++14	Accepted	77 ms	5200 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
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

    map<int, bool> choose;

    vector<int> arr;
    for (int i = 1; i <= n; ++i)
        if (!choose[i])
            for (int j = i; j <= n; j *= 2)
                arr.push_back(j), choose[j] = true;
    
    for (int i = 1; i <= n; ++i)
        if (!choose[i])
            arr.push_back(i);
    for (auto elem : arr)
        cout << elem << ' ';
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
