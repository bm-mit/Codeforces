//* 202612108	Apr/18/2023 20:46UTC+7	Minh4893IT	A - Fancy Fence	GNU C++17	Accepted	0 ms	0 KB

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