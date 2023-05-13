//* 205578823	00:35:27	Minh4893IT	B - Maximum Sum	GNU C++14	Accepted	93 ms	3100 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define vec vector
#define pq priority_queue
#define pb push_back
#define popb pop_back

#define LLMAX INT64_MAX

#define GET(var) getline(cin, var)

#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
template <class T>
void OFILE(T finp, T fout)
{
    freopen(finp, "r", stdin), freopen(fout, "w", stdout);
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vec<int> arr(n + 1), prefSum(n + 1);

    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    sort(arr.begin() + 1, arr.begin() + n + 1);

    for (int i = 1; i <= n; ++i)
        prefSum[i] = prefSum[i - 1] + arr[i];

    int lastIdx = n - k;
    int result = 0;
    for (int i = 1; i <= 2 * k + 1; i += 2)
    {
        result = max(result,
                     prefSum[lastIdx] - prefSum[i - 1]);
        ++lastIdx;
    }
    cout << result << endl;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
