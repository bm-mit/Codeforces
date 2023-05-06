//* 204748535	May/06/2023 21:16UTC+7	Minh4893IT	B - Fence	GNU C++14	Accepted	46 ms	1200 KB

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
    int n, k;
    cin >> n >> k;

    array<int, 150005> arr;


    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }

    int sum = LLMAX;
    int result = -1;
    for (int i = 1; i <= n - k + 1; ++i)
        if (arr[i + k - 1] - arr[i - 1] < sum)
        {
            sum = arr[i + k - 1] - arr[i - 1];
            result = i;
        }

    cout << result;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
