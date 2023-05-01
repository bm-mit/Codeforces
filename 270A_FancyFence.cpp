#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int angle;
        cin >> angle;

        cout << (360 % (180 - angle) == 0 && 360 / (180 - angle) >= 3 ? "YES" : "NO") << "\n";
    }

    return 0;
}