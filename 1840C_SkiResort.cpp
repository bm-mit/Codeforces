//* 226304627	Oct/02/2023 20:47UTC+7	Minh4893IT	C - Ski Resort	GNU C++14	Accepted	77 ms	800 KB

#include <bits/stdc++.h>
using namespace std;

// #define int long long
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

array<int, 200005> arr;

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;

    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    long long result = 0;
    int ptr1 = 0;
    for (int ptr2 = 1; ptr2 <= n; ++ptr2)
    {
        if (arr[ptr2] > q)
            ptr1 = ptr2;

        if (ptr2 - ptr1 < k)
            continue;

        result += max(0, ptr2 - ptr1 - k + 1);
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
