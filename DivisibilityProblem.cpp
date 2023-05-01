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