//* 194570762	Feb/22/2023 20:18UTC+7	Minh4893IT	A - Elephant	GNU C++17	Accepted	15 ms	0 KB

#include <iostream>
using namespace std;

int main()
{
    int DISTANCE;
    cin >> DISTANCE;

    cout << DISTANCE / 5 + (DISTANCE % 5 != 0);

    return 0;
}