//* 225347379	Sep/26/2023 22:27UTC+7	Minh4893IT	E - Iva & Pav	GNU C++14	Accepted	701 ms	52700 KB

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

int n, q;
array<array<int, 32>, 200005> countbit;
array<int, 200005> arr;

void init()
{
    for (int i = 1; i <= n; ++i)
    {
        countbit[i].fill(0);

        for (int j = 1; j <= 31; ++j)
        {
            countbit[i][j] = (arr[i] >> (j - 1)) & 1;
            countbit[i][j] += countbit[i - 1][j];
        }
    }
}

int getRange(int l, int r)
{
    --l;

    int result = 0;
    for (int i = 1; i <= 31; ++i)
        if (countbit[r][i] - countbit[l][i] == r - l)
            result |= 1 << (i - 1);

    return result;
}

int find(int l, int k)
{
    int low = l;
    int high = n;
    int res = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (getRange(l, mid) >= k)
        {
            res = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    return res;
}

void solve()
{
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    init();

    int q;
    cin >> q;

    while (q--)
    {
        int l, k;
        cin >> l >> k;

        cout << find(l, k) << ' ';
        // cerr << getRange(l, k) << ' ';
    }

    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
