//* 202722567	Apr/19/2023 21:44UTC+7	Minh4893IT	A - Balanced Rating Changes	GNU C++17	Accepted	61 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool roundUp = true;
    while (n--)
    {
        int change;
        cin >> change;
        if (change & 1)
        {
            if (change < 0)
                cout << change / 2 - !roundUp << "\n";
            else
                cout << change / 2 + roundUp << "\n";
            roundUp = !roundUp;
        }
        else
            cout << change / 2 << "\n";
    }

    return 0;
}