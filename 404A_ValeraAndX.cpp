//* 202597107	Apr/18/2023 18:34UTC+7	Minh4893IT	A - Valera and X	GNU C++17	Accepted	15 ms	300 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> board(n);
    getline(cin, board[0]);
    for (auto &elem : board)
        getline(cin, elem);

    char diag = board[0][0];
    char normal = board[0][1];

    if (normal == diag)
    {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < n; ++i)
    {
        if (board[i][i] != diag)
        {
            cout << "NO";
            return 0;
        }
        if (board[i][n - i - 1] != diag)
        {
            cout << "NO";
            return 0;
        }
    }

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
        {
            if (i == j)
                continue;
            if (j == n - i - 1)
                continue;
            if (board[i][j] != normal)
            {
                cout << "NO";
                return 0;
            }
        }

    cout << "YES";

    return 0;
}