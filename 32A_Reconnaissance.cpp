//* 205332603	May/10/2023 20:28UTC+7	Minh4893IT	A - Reconnaissance	GNU C++14	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define vec vector
#define pq priority_queue

#define LLMAX INT64_MAX

#define in cin
#define out cout
#define input in
#define print out
#define GET(var) getline(cin, var)

#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define FORIR(i, a, n) for (int i = a; i < n; i++)
#define FORI(i, n) FORIR(i, 0, n)
#define FORR(a, n) FORIR(i, a, n)
#define FOR(n) FORIR(i, 0, n)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
template <class T>
void OFILE(T finp, T fout)
{
    freopen(finp, "r", stdin), freopen(fout, "w", stdout);
}

void solve()
{
    int n, d;
    cin >> n >> d;

    array<int, 1005> arr;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.begin() + n);

    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        int val = arr[i];

        int low = 0;
        int high = n - 1;
        int res1 = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] >= val - d)
            {
                res1 = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }

        low = 0;
        high = n - 1;
        int res2 = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] <= val + d)
            {
                res2 = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        res += res2 - res1;
    }
    cout << res;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
