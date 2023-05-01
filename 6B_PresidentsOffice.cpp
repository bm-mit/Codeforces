//* 202920326	Apr/21/2023 12:31UTC+7	Minh4893IT	B - President's Office	GNU C++17	Accepted	15 ms	900 KB

#include <bits/stdc++.h>
using namespace std;

vector<string> board;
vector<vector<bool>> mark;
unordered_set<char> result;
int n, m;
char president;

char get(int row, int col)
{
    if (row < 0 || row >= n || col < 0 || col >= m)
        return '.';
    return board[row][col];
}

bool check(int row, int col)
{
    return get(row, col) != president && get(row, col) != '.';
}

void loang(int row, int col)
{
    if (row < 0 || row >= n || col < 0 || col >= m)
        return;
    if (get(row, col) != president)
        return;
    if (mark[row][col])
        return;

    mark[row][col] = true;
    if (check(row - 1, col))
        result.insert(get(row - 1, col));
    if (check(row + 1, col))
        result.insert(get(row + 1, col));
    if (check(row, col - 1))
        result.insert(get(row, col - 1));
    if (check(row, col + 1))
        result.insert(get(row, col + 1));

    loang(row + 1, col);
    loang(row - 1, col);
    loang(row, col + 1);
    loang(row, col - 1);
}

int main()
{
    string line;
    getline(cin, line);

    stringstream stream(line);

    stream >> n >> m >> president;

    board = vector<string>(n);
    mark = vector<vector<bool>>(n, vector<bool>(m));

    for (auto &elem : board)
        getline(cin, elem);

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (!mark[i][j] && board[i][j] == president)
                loang(i, j);

    cout << result.size();

    return 0;
}
