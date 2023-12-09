//* 236524092	Dec/09/2023 22:57UTC+7	Minh4893IT	B - StORage room	GNU C++14	Accepted	296 ms	7900 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

int n;
array<array<int, 1005>, 1005> board;

void solve()
{
    cin >> n;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> board[i][j];

    array<int, 1005> arr;
    for (auto &elem : arr)
        elem = (1 << 30) - 1;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i - j)
            {
                arr[i] &= board[i][j];
                arr[j] &= board[i][j];
            }

    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if ((arr[i] | arr[j]) != board[i][j])
                return void(cout << "NO" << endl);

    cout << "YES" << endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
