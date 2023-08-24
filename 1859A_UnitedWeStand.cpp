//* 218535566	Aug/12/2023 22:14UTC+7	Minh4893IT	A - United We Stand	GNU C++14	Accepted	31 ms	100 KB

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

vector<int> divisors(int n)
{
    vector<int> result;
    for (int i = 1; i * i <= n; ++i)
        if (n % i == 0)
            result.push_back(i), result.push_back(n / i);
    sort(result.begin(), result.end());
    result.pop_back();
    return result;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    int idx = 1;
    for (; idx < n; ++idx)
        if (arr[idx] != arr[idx - 1])
            break;

    if (idx == n)
    {
        cout << -1 << endl;
        return;
    }

    cout << idx << ' ' << n - idx << endl;
    for (int i = 0; i < idx; ++i)
        cout << arr[i] << ' ';
    cout << endl;

    for (int i = idx; i < n; ++i)
        cout << arr[i] << ' ';
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
