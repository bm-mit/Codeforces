#include <iostream>
using namespace std;
using ll = unsigned long long int;

int main()
{
    ll PRICE, MONEY, NUMBER;

    cin >> PRICE >> MONEY >> NUMBER;

    ll TOTAL_PRICE = NUMBER * (NUMBER + 1) / 2 * PRICE;

    if (MONEY >= TOTAL_PRICE)
        cout << 0;
    else
        cout << TOTAL_PRICE - MONEY;

    return 0;
}