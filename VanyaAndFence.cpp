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