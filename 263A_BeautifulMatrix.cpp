//* 194445749	Feb/21/2023 18:23UTC+7	Minh4893IT	A - Beautiful Matrix	GNU C++17	Accepted	30 ms	0 KB

#include <iostream>
using namespace std;

int main()
{
    int row = 0;
    int col = 0;

    int val;
    for (row = 0; row < 5; ++row)
    {
        for(col = 0; col < 5; ++col)
        {
            cin >> val;
            if (val)
            {
                cout << abs(row - 2) + abs(col - 2);
                return 0;
            }
        }
    }

    cout << abs(row - 2) + abs(col - 2);

    return 0;
}