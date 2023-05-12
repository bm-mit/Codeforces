//* 205494642	May/12/2023 10:51UTC+7	Minh4893IT	B - Petya and Staircases	GNU C++14	Accepted	15 ms	0 KB

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
    int n, m;
    cin >> n >> m;
    vec<int> arr(m);
    EACH(elem, arr)
        cin >> elem;
    sort(arr.begin(), arr.end());

    for (int i = 1; i < m - 1; ++i)
        if (arr[i - 1] + 1 == arr[i] && arr[i] == arr[i + 1] - 1)
        {
            cout << "NO";
            return;
        }

    if (arr.size())
    {
        if (arr[0] == 1 || arr[m - 1] == n)
            cout << "NO";
        else
            cout << "YES";
    }
    else
        cout << "YES";
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
