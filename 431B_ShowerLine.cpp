//* 204708729	May/06/2023 15:06UTC+7	Minh4893IT	B - Shower Line	GNU C++14	Accepted	15 ms	0 KB

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

array<array<int, 6>, 6> board;
array<int, 5> perm;

int calc()
{
    int result = 0;
    for (int i = 0; i < 5; ++i)
        for (int j = i; j < 4; j += 2)
            result += board[perm[j]][perm[j + 1]] + board[perm[j+1]][perm[j]];
    return result;
}

void solve()
{
    for (int i = 1; i <= 5; ++i)
        for (int j = 1; j <= 5; ++j)
            cin >> board[i][j];

    for (int i = 0; i < 5; ++i)
        perm[i] = i + 1;

    int result = 0;
    for (int i = 0; i < 240; ++i)
    {
        result = max(result, calc());
        next_permutation(perm.begin(), perm.end());
    }
    cout << result;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
