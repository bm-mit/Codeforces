//* 194442032	Feb/21/2023 17:44UTC+7	Minh4893IT	A - Team	GNU C++17	Accepted	30 ms	0 KB

#include <iostream>
using namespace std;

int TOTAL_SOLUTIONS;

int main()
{
    cin >> TOTAL_SOLUTIONS;

    int res = 0;

    for (int sol = 0; sol < TOTAL_SOLUTIONS; ++sol)
    {
        int sure = 0;
        int temp;
        for (int i = 0; i < 3; ++i)
        {
            cin >> temp;
            sure += temp;
        }
        res += sure >= 2;
    }

    cout << res;

    return 0;
}