//* 195134948	Feb/27/2023 20:57UTC+7	Minh4893IT	A - Candies and Two Sisters	GNU C++17	Accepted	46 ms	0 KB

#include <iostream>
using namespace std;

using ll = long long int;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        ll n;
        cin >> n;
        cout << ((n > 2) ? n / 2 - (n % 2 == 0) : 0) << endl;
    }

    return 0;
}