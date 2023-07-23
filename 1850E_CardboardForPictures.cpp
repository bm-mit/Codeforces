//* 214861767	Jul/21/2023 22:25UTC+7	Minh4893IT	E - Cardboard for Pictures	GNU C++14	Accepted	77 ms	1600 KB

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
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()

int n, c;
vector<int> arr(n);

int check(int size)
{
    // return 1: ++w
    // return -1: --w
    int sum = 0;
    for (auto elem : arr)
    {
        sum += (elem + 2 * size) * (elem + 2 * size);
        if (sum > c)
            return -1;
    }
    
    if (sum == c)
        return 0;
    return 1;
}

void solve()
{
    cin >> n >> c;

    arr.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int low = 0;
    int high = INT_MAX / 4;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int che = check(mid);
        // cerr << mid << ' ';
        if (!che)
        {
            cout << mid << endl;
            return;
        }
        else if (che == 1)
            low = mid + 1;
        else
            high = mid - 1;
    }
}

signed main()
{
    FAST_IO;

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
