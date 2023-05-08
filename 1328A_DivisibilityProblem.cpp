//* 195019133	Feb/26/2023 13:16UTC+7	Minh4893IT	A - Divisibility Problem	GNU C++17	Accepted	61 ms	0 KB

#include <iostream>
using namespace std;

int main()
{
    int T, a, b;

    cin >> T;
    for (int test = 0; test < T; ++test)
    {
        cin >> a >> b;
        cout << (a / b + (a % b != 0)) * b - a << endl;
    }

    return 0;
}