#include <iostream>
using namespace std;

int main()
{
    int strength, n;

    cin >> strength >> n;

    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (strength <= x)
        {
            cout << "NO";
            return 0;
        }
        strength += y;
    }

    cout << "YES";

    return 0;
}