#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);

    int numOfPeople;
    cin >> numOfPeople;

    bool isHard;
    for (int idx = 0; idx < numOfPeople; ++idx)
    {
        cin >> isHard;
        if (isHard)
        {
            cout << "HARD";
            return 0;
        }
    }

    cout << "EASY";
}