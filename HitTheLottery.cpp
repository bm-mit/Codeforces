#include <iostream>
using namespace std;

int main()
{
    int bill[] = { 100, 20, 10, 5, 1 };

    int money;
    cin >> money;

    int res = 0;
    for (int i = 0; i < 5; ++i)
    {
        res += money / bill[i];
        money -= money / bill[i] * bill[i];
    }

    cout << res;

    return 0;
}