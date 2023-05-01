#include <iostream>
using namespace std;

int main()
{
    int firstBear, secondBear;
    cin >> firstBear >> secondBear;

    int res = 0;
    while (firstBear <= secondBear)
    {
        firstBear *= 3;
        secondBear *= 2;
        ++res;
    }

    cout << res;

    return 0;
}