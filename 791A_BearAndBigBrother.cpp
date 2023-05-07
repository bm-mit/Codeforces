//* 194464023	Feb/21/2023 21:05UTC+7	Minh4893IT	A - Bear and Big Brother	GNU C++17	Accepted	15 ms	0 KB

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