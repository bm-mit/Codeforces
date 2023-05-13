//* 205685406	May/13/2023 14:25UTC+7	Minh4893IT	B - Worms	GNU C++14	Accepted	358 ms	1600 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define pq priority_queue
#define endl "\n"

#define LLMAX INT64_MAX
#define GET(var) getline(cin, var)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
void OFILE(const char *finp, const char *fout)
{
    freopen(finp, "r", stdin), freopen(fout, "w", stdout);
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n + 1);
    arr[0].first = arr[0].second = 0;

    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i].second;
        arr[i].second += arr[i - 1].second;
        arr[i].first = arr[i - 1].second + 1;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int query;
        cin >> query;

        int low = 1;
        int high = n;
        int result = 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid].first <= query && query <= arr[mid].second)
            {
                result = mid;
                break;
            }
            if (query < arr[mid].first)
                high = mid - 1;
            else if (query > arr[mid].second)
                low = mid + 1;
        }
        cout << result << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
