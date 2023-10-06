//* 225138507	Sep/25/2023 22:54UTC+7	Minh4893IT	B - Sets and Union	GNU C++14	Accepted	62 ms	200 KB

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

int union_size;
array<vector<int>, 51> idx;
array<int, 51> cnt;

int try_del(int i)
{
    int result = union_size;
    array<int, 51> count = cnt;
    for (auto elem : idx[i])
        for (int k = 1; k <= 50; ++k)
        {
            if (count[k] > 1 && binary_search(idx[k].begin(), idx[k].end(), elem))
                --count[k];
            else if (count[k] == 1 && binary_search(idx[k].begin(), idx[k].end(), elem))
                --result;
        }
    return result;
}

void solve()
{
    int n;
    cin >> n;
    idx.fill(vector<int>());
    cnt.fill(0);
    union_size = 0;

    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;

        for (int j = 0; j < k; ++j)
        {
            int val;
            cin >> val;

            idx[val].push_back(i);
            ++cnt[val];
        }
    }

    for (int i = 1; i <= 50; ++i)
        union_size += !idx[i].empty();

    int result = 0;
    for (int i = 1; i <= 50; ++i)
        if (idx[i].size())
            result = max(result, try_del(i));
    cout << result << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
