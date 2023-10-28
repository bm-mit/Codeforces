//* 230182687	Oct/28/2023 21:35UTC+7	Minh4893IT	B - Duff in Love	GNU C++14	Accepted	217 ms	39400 KB

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

bool check(int n)
{
    map<int, int> count;
    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            ++count[i];
            n /= i;
        }
        if (count[i] >= 2)
            return false;
    }

    return !count[n];
}

void solve()
{
    int n;
    cin >> n;

    vector<int> div;
    for (int i = 1; i * i <= n; ++i)
        if (n % i == 0)
        {
            div.push_back(i);
            if (i != n / i)
                div.push_back(n / i);
        }

    sort(div.rbegin(), div.rend());

    for (auto elem : div)
        if (check(elem))
        {
            cout << elem;
            return;
        }
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
