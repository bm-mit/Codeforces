//* 194444560	Feb/21/2023 18:10UTC+7	Minh4893IT	A - Next Round	GNU C++17	Accepted	30 ms	0 KB

#include <iostream>
using namespace std;

int TOTAL_PARTICIPANTS, MINIMUM_POINT_IDX;

int main()
{
    cin >> TOTAL_PARTICIPANTS >> MINIMUM_POINT_IDX;

    int res = 0;

    int point;
    int minimumPoint = 0;
    for (int i = 0; i < TOTAL_PARTICIPANTS; ++i)
    {
        cin >> point;
        if (i == MINIMUM_POINT_IDX - 1)
            minimumPoint = point;

        if (point >= minimumPoint && point > 0)
            ++res;
        else
            break;
    }

    cout << res;

    return 0;
}