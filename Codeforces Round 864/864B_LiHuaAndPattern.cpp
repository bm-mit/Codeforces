#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> board(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> board[i][j];

    for (int i = 0; i < n / 2; ++i)
        for (int j = 0; j < n; ++j)
            if (board[i][j] != board[n - i - 1][n - j - 1])
                --k;

    if (n % 2)
    {
        int i = n / 2;
        for (int j = 0; j < n / 2; ++j)
        {
            if (board[i][j] != board[i][n - j - 1])
            {
                --k;
            }
        }
    }

    cout << (k % 2 == 0 && k >= 0 ? "YES" : "NO") << "\n";
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}