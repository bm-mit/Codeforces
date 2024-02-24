//* 247820519	Feb/23/2024 10:40UTC+7	Minh4893IT#	D - Vlad and Division	GNU C++17	Accepted	421 ms	16700 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    int n;
    cin >> n;
    array<bitset<31>, 200005> arr;

    map<int, int> count;

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
        ++count[temp];
    }
    
    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        int num = arr[i].to_ullong();
        int flip = arr[i].flip().to_ullong();
        if (count[num])
        {
            ++result;
            --count[num];
            if (count[flip])
                --count[flip];
        }
    }

    cout << result << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}

