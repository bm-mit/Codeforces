#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> board(n, vector<int>(m));

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                scanf("%d", &board[i][j]);

        long long result = 0;
        for (int j = 0; j < m; ++j)
            for (int i = 0; i < n; ++i)
                for (int k = i + 1; k < n; ++k)
                    result += abs(board[i][j] - board[k][j]);
        cout << result << endl;
    }

    return 0;
}