//* 206501291	00:49:56	Minh4893IT	C - Vlad Building Beautiful Array	GNU C++17	Accepted	93 ms	3140 KB

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

vector<int> arr;

void solve()
{
    int n;
    cin >> n;
    arr.resize(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    vector<int> isOdd(n);

    int odd = 0;
    for (int i = 0; i < n; ++i)
    {
        isOdd[i] = odd;
        if (arr[i] & 1)
            odd = arr[i];
    }

    int numOfOdd = 0;
    int numOfEven = 0;
    for (int i = 0; i < n; ++i)
    {
        int oddinc = 0;
        int eveninc = 0;
        if (arr[i] > 0)
            if (arr[i] % 2 == 0)
                oddinc = 1;
            else
                eveninc = 1;

        if (isOdd[i] && isOdd[i] != arr[i])
        {
            if (arr[i] % 2 == 0)
                eveninc = 1;
            else
                oddinc = 1;
        }

        numOfEven += eveninc;
        numOfOdd += oddinc;
    }

    if (numOfEven == n || numOfOdd == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
