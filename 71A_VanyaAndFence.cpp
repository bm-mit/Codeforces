//* 194441713	Feb/21/2023 17:39UTC+7	Minh4893IT	A - Way Too Long Words	GNU C++17	Accepted	15 ms	0 KB

#include <iostream>
using namespace std;

int main()
{
    int numOfPeople, fenceHeight;
    cin >> numOfPeople >> fenceHeight;

    int rowWidth = 0;

    int personHeight;
    for (int idx = 0; idx < numOfPeople; ++idx)
    {
        cin >> personHeight;
        rowWidth += 1 + 1 * (personHeight > fenceHeight);
    }

    cout << rowWidth;

    return 0;
}