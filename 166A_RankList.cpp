//* 218416833	Aug/12/2023 08:54UTC+7	Minh4893IT	A - Rank List	GNU C++14	Accepted	30 ms	0 KB

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

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first > b.first)
        return true;
    if (a.first == b.first)
        return a.second < b.second;
    return false;
}

int upbound(vector<int> &arr, int val)
{
    int low = 0;
    int high = arr.size() - 1;
    int res = high;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= val)
        {
            res = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return res;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i].first >> arr[i].second;
    sort(arr.begin(), arr.end(), comp);

    vector<int> rank = {0, 1};
    for (int i = 1; i < n; ++i)
        if (arr[i] != arr[i - 1])
            rank.push_back(rank.back() + 1);
        else
            ++rank.back();

    int idx = upbound(rank, k);
    cout << rank[idx] - rank[idx - 1];
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}