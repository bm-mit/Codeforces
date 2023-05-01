#include <bits/stdc++.h>
using namespace std;

int main()
{
    string board[4];
    for (auto &elem : board)
        getline(cin, elem);

    vector<vector<int>> prefSum(5, vector<int>(5));
    for (int i = 1; i <= 4; ++i)
        for (int j = 1; j <= 4; ++j)
            prefSum[i][j] = prefSum[i - 1][j] + prefSum[i][j - 1] - prefSum[i - 1][j - 1] + (board[i - 1][j - 1] == '#');


    for (int i = 2; i <= 4; ++i)
        for (int j = 2; j <= 4; ++j)
        {
            int pos = prefSum[i][j];
            int top = prefSum[i - 2][j];
            int left = prefSum[i][j - 2];
            int topleft = prefSum[i - 2][j - 2];
            int res = pos - top - left + topleft;
            if (res != 2)
            {
                cout << "YES";
                return 0;
            }
        }

    cout << "NO";

    return 0;
}