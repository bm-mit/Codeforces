//* 225289502	Sep/26/2023 21:43UTC+7	Minh4893IT	B - Aleksa and Stack	GNU C++14	Accepted	46 ms	4100 KB

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

    vector<int> result = {1, 3};
    for (int i = 2; i < n; ++i)
    {
        int sum = result[i - 1] + result[i - 2];

        int choose = result[i-1] + 1;
        while (choose % sum == 0 || (choose + result[i-1]) % 3 == 0)
            ++choose;
        result.push_back(choose);
    }

    for (auto elem : result)
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
