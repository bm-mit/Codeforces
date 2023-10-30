//* 230498823	Oct/30/2023 20:00UTC+7	Minh4893IT	B - The Child and Set	GNU C++14	Accepted	31 ms	3100 KB

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

int countr_zero(int n)
{
    int result = 0;
    while (!(n & 1))
        n >>= 1, ++result;
    return result;
}

void solve()
{
    int sum, limit;
    cin >> sum >> limit;

    vector<pair<int, int>> nums;
    for (int i = 1; i <= limit; ++i)
        nums.push_back({countr_zero(i), i});
    
    sort(nums.rbegin(), nums.rend());
    
    vector<int> result;
    for (auto elem : nums)
        if (1 << elem.first <= sum)
            sum -= 1 << elem.first, result.push_back(elem.second);
    
    if (sum)
    {
        cout << -1;
        return;
    }

    cout << result.size() << endl;
    for (auto elem : result)
        cout << elem << ' ';
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
