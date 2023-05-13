//* 205713653	May/13/2023 18:54UTC+7	Minh4893IT	C - Contrast Value	GNU C++14	Accepted	93 ms	7200 KB

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

vector<int> arr;

void solve()
{
    arr.resize(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        if ((arr.size() && arr.back() != temp) || arr.empty())
            arr.push_back(temp);
    }

    bool isIncreasing = arr[1] > arr[0];
    vector<int> result = {arr[0]};
    for (int i = 1; i < arr.size(); ++i)
    {
        if (isIncreasing)
        {
            while (i < arr.size() && arr[i] > arr[i-1])
                ++i;
            result.push_back(arr[--i]);
        }
        else
        {
            while (i < arr.size() && arr[i] < arr[i-1])
                ++i;
            result.push_back(arr[--i]);
        }
        isIncreasing = !isIncreasing;
    }

    cout << result.size() << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
