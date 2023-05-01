#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int ROW, COL;
    cin >> ROW >> COL;

    for (int row = 0; row < ROW; ++row)
    {
        for (int col = 0; col < COL; ++col)
        {
            if (row % 2 == 0)
            {
                cout << "#";
                continue;
            }
            if (col == 0)
                if ((row + 1) % 4 == 0)
                {
                    cout << "#";
                    continue;
                }

            if (col == COL - 1)
                if ((row + 1) % 4 == 2)
                {
                    cout << "#";
                    continue;
                }

            cout << ".";
        }
        cout << endl;
    }

    return 0;
}