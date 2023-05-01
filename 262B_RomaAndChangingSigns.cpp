//* 203515630	Apr/26/2023 12:26UTC+7	Minh4893IT	262B - Roma and Changing Signs	GNU C++17	Accepted	92 ms	800 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define s string

#define in cin
#define out cout

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
void OFILE(T inp, T out)
{
    freopen(inp, "r", stdin), freopen(out, "w", stdout);
}

void solve()
{
    int n, k;
    in >> n >> k;

    vector<int> arr(n);
    EACH(elem, arr)
    {
        in >> elem;
    }

    int i = 0;
    FORI(i, n)
    {
        if (arr[i] >= 0 || !k)
            break;
        arr[i] *= -1;
        --k;
    }

    int sum = 0;
    EACH(elem, arr)
    {
        sum += elem;
    }

    int minE = *min_element(all(arr));
    if (k & 1)
        sum -= 2 * minE;
    out << sum;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}