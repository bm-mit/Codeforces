#include <iostream>
using namespace std;

int main()
{
    int DISTANCE;
    cin >> DISTANCE;

    cout << DISTANCE / 5 + (DISTANCE % 5 != 0);

    return 0;
}